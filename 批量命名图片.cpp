#include <opencv2/opencv.hpp>
#include <stdio.h>
#include <iostream>

using namespace std;
using namespace cv;

int main(){
	Mat srcImage;
	string filePath = "home/rgb/";
	string newPath = filePath + "output/";
	vector <string> originName;
	char newName[10];
	glob(filePath,originName,false);
	for(int i = 0; i<newName.size();i++){
		string fileName= originName[i];
		srcImage = imread(originName[i],CV_LOAD_IMAGE_UNCHANGED);
		sprintf = (newName,"%04d.png",i);
		imwrite(newPath+newName,srcImage);
	}

	retrun 0;
}