//主函数 
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "rgb2bmp.h"
int  TransBMP()
{    FILE* p;
/***************  input data  ***********
    filename      :RGB数据文件名称
    nWidth        :所生成文件的水平像素
    nHeight       :所生成文件的垂直像素
    newFile       :最终生成文件的名称
***********************************************/
    char* filename = "./rgb565.bin";
    int nWidth = 240;
    int nHeight = 320;
    char* newFile = "./rgb565_240_320_woman_0x7f.bmp";
    p = fopen(filename,"rb");
    if (p == NULL)
    {
        qDebug("!!!file %s open failed.n", filename);
        return 0;
    }
     qDebug("file %s open success.n",filename);
/***********  read Image Data  **************/    
    long nData = nWidth*nHeight;
    unsigned short* rgb_buffer = (unsigned short*)malloc(nData*sizeof(short));   
    fread(rgb_buffer,2,nData,p);
    long total = nWidth*nHeight*3;
    unsigned char* pVisit = (unsigned char*) malloc(total*sizeof(char));
    unsigned char* tmp = pVisit;
    long i =0;
    unsigned char R,G,B;
    while(i<nData)
    {
    R = *rgb_buffer&0x1f;
    G = (*rgb_buffer>>5)&0x3f;
    B = (*rgb_buffer>>11)&0x1f;
    B = B<<3;
    G = G<<2;
    R = R<<3;
      *pVisit=R;pVisit++;
      *pVisit=G;pVisit++;
      *pVisit=B;pVisit++;
      rgb_buffer++;
      i++; 
     }
    qDebug("read file over.nData%ldn",nData);
/*****************************************************/
/***********  write file *******************/
    FILE *result = fopen(newFile,"wb");
    if (result == NULL)
    {
       qDebug("open new file failed.n");
       return -1;
    }
    RGB2BMP(tmp,nWidth,nHeight,result);
    fclose(result);
    return 0;
}
   
/****************************
      RGB加上头部信息转换成BMP
      参数說明：
      rgb_buffer        :RGB数据文件中的信息
      nData             :RGB数据的长度
      nWidth            :图像宽度的像素数
      nHeight           :图像高度的像素数
      fp1               :所存放的文件
*****************************/
int RGB2BMP(unsigned char *rgb_buffer,int nWidth,int nHeight,FILE*fp1)
{
     BmpHead m_BMPHeader;
     char bfType[2]={'B','M'};
     m_BMPHeader.imageSize=3*nWidth*nHeight+54;
     m_BMPHeader.blank=0;
     m_BMPHeader.startPosition=54;

     fwrite(bfType,1,sizeof(bfType),fp1);
     fwrite(&m_BMPHeader.imageSize,1,sizeof(m_BMPHeader.imageSize),fp1);
     fwrite(&m_BMPHeader.blank,1,sizeof(m_BMPHeader.blank),fp1);
     fwrite(&m_BMPHeader.startPosition,1,sizeof(m_BMPHeader.startPosition),fp1);

     InfoHead  m_BMPInfoHeader;
     m_BMPInfoHeader.Length=40;
     m_BMPInfoHeader.width=nWidth;
     m_BMPInfoHeader.height=nHeight;
     m_BMPInfoHeader.colorPlane=1;
     m_BMPInfoHeader.bitColor=24;
     m_BMPInfoHeader.zipFormat=0;
     m_BMPInfoHeader.realSize=3*nWidth*nHeight;
     m_BMPInfoHeader.xPels=0;
     m_BMPInfoHeader.yPels=0;
     m_BMPInfoHeader.colorUse=0;
     m_BMPInfoHeader.colorImportant=0;

     fwrite(&m_BMPInfoHeader.Length,1,sizeof(m_BMPInfoHeader.Length),fp1);
     fwrite(&m_BMPInfoHeader.width,1,sizeof(m_BMPInfoHeader.width),fp1);
     fwrite(&m_BMPInfoHeader.height,1,sizeof(m_BMPInfoHeader.height),fp1);
     fwrite(&m_BMPInfoHeader.colorPlane,1,sizeof(m_BMPInfoHeader.colorPlane),fp1);
     fwrite(&m_BMPInfoHeader.bitColor,1,sizeof(m_BMPInfoHeader.bitColor),fp1);
     fwrite(&m_BMPInfoHeader.zipFormat,1,sizeof(m_BMPInfoHeader.zipFormat),fp1);
     fwrite(&m_BMPInfoHeader.realSize,1,sizeof(m_BMPInfoHeader.realSize),fp1);
     fwrite(&m_BMPInfoHeader.xPels,1,sizeof(m_BMPInfoHeader.xPels),fp1);
     fwrite(&m_BMPInfoHeader.yPels,1,sizeof(m_BMPInfoHeader.yPels),fp1);
     fwrite(&m_BMPInfoHeader.colorUse,1,sizeof(m_BMPInfoHeader.colorUse),fp1);
     fwrite(&m_BMPInfoHeader.colorImportant,1,sizeof(m_BMPInfoHeader.colorImportant),fp1);
     fwrite(rgb_buffer,3*nWidth*nHeight,1,fp1);

     return 0;
}
