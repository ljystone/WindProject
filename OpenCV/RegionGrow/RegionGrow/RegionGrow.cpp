// RegionGrow.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<opencv2/highgui/highgui.hpp>
#include<boost/shared_ptr.hpp>
#include<boost/make_shared.hpp>
int main()
{
	//cv::Mat src = cv::imread("./3.jpg");
	//boost::shared_ptr<int> sptrInt = boost::make_shared<int>(8);
	boost::shared_ptr<int> sptrInt(new int(8));
	std::cout << *sptrInt << std::endl;
    std::cout << "Hello World!\n"; 
}
