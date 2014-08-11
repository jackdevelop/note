// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//


#include "stdafx.h"
#include <string>
#include <iostream>

#include <fstream>


int _tmain(int argc, _TCHAR* argv[])
{

	/**
	//控制台输入 并显示（扑捉用户的控制台输入）
	std::string str;
	std::cout<<"输入相关字符：";	//cout --》		#include <iostream>
	std::cin>>str;//直接str::cin>>str,那么在出现空格时 就会中断，只会捕获出现空格前的字符,而下面getline会捕获出现回车键前的所有
	getline(std::cin,str);			//getline --》	#include <string>
	std::cout<<"您当前输入的字符是： "<< str <<std::endl;


	//循环输入，直到输出正确的0
	int num;
	while (std::cin>>num){
		if(num==0)
		{
			std::cout<<"ok"<<num<<std::endl;
			break;
		}
		else
		{
			std::cout<<"error"<<num<<std::endl;
		}
	}
	**/









	

	//ifstream 使用 in输出之意
	std::ifstream in ;  // ifstream --》 #include <fstream>
	in.open("F:/workspace/c++/ConsoleApplication1/ConsoleApplication1/Test.h");
	if(!in)
	{
		std::cout<<"faile"<<std::endl;
	}
	//输出
	std::string str;
	while (getline(in,str)){//这句和 while (std::getline(in,str)){  一致
		std::cout<<str<<std::endl;
	}
	in.close();



	//ofstream 使用 out输入之意
	std::ofstream out;// ofstream --》 #include <fstream>
	out.open("F:/workspace/c++/ConsoleApplication1/ConsoleApplication1/Test.h",std::ios::app);
	if(!out)
	{
		std::cout<<"faile"<<std::endl;
	}
	std::string outStr;
	getline(std::cin,outStr);
	out<<outStr;
	out.close();



	
	//计算 数组长度
	int arr[]={1,2,3};
	std::cout<<sizeof(arr)/sizeof(int)<<std::endl;
	std::cout<<sizeof(arr)/sizeof(arr[0])<<std::endl;


	//暂停
	std::system("pause");
	return 0;
}

