// ConsoleApplication1.cpp : �������̨Ӧ�ó������ڵ㡣
//


#include "stdafx.h"
#include <string>
#include <iostream>

#include <fstream>


int _tmain(int argc, _TCHAR* argv[])
{

	/**
	//����̨���� ����ʾ����׽�û��Ŀ���̨���룩
	std::string str;
	std::cout<<"��������ַ���";	//cout --��		#include <iostream>
	std::cin>>str;//ֱ��str::cin>>str,��ô�ڳ��ֿո�ʱ �ͻ��жϣ�ֻ�Ჶ����ֿո�ǰ���ַ�,������getline�Ჶ����ֻس���ǰ������
	getline(std::cin,str);			//getline --��	#include <string>
	std::cout<<"����ǰ������ַ��ǣ� "<< str <<std::endl;


	//ѭ�����룬ֱ�������ȷ��0
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









	

	//ifstream ʹ�� in���֮��
	std::ifstream in ;  // ifstream --�� #include <fstream>
	in.open("F:/workspace/c++/ConsoleApplication1/ConsoleApplication1/Test.h");
	if(!in)
	{
		std::cout<<"faile"<<std::endl;
	}
	//���
	std::string str;
	while (getline(in,str)){//���� while (std::getline(in,str)){  һ��
		std::cout<<str<<std::endl;
	}
	in.close();



	//ofstream ʹ�� out����֮��
	std::ofstream out;// ofstream --�� #include <fstream>
	out.open("F:/workspace/c++/ConsoleApplication1/ConsoleApplication1/Test.h",std::ios::app);
	if(!out)
	{
		std::cout<<"faile"<<std::endl;
	}
	std::string outStr;
	getline(std::cin,outStr);
	out<<outStr;
	out.close();



	
	//���� ���鳤��
	int arr[]={1,2,3};
	std::cout<<sizeof(arr)/sizeof(int)<<std::endl;
	std::cout<<sizeof(arr)/sizeof(arr[0])<<std::endl;


	//��ͣ
	std::system("pause");
	return 0;
}

