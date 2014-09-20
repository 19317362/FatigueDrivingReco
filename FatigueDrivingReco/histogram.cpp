/***************************************
���ܣ�����ͼ���ֱ��ͼ
���룺ͼ��ָ�룬���ֱ��ͼ�������׵�ַ
Date: 2014.08.14
****************************************/

#include"cv.h"

void histogram(IplImage * img, int * hist)
{
	int width = img->width;
	int height = img->height;
	int i, j;
	uchar* imageData = (uchar*)img->imageData;

	//ͳ�ƻҶȼ����������ظ���
	for(i = 0; i < height; i++){
		for(j = 0;j <width;j++){
			hist[imageData[i * img->widthStep + j]]++;
		}
	}
}