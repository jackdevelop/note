// ConsoleApplication1.cpp : �������̨Ӧ�ó������ڵ㡣
//


#include "stdafx.h"
#include <iostream>
#include <string>


struct UserInfo
{
	int userId;
	std::string userName;
	std::string userInfo;
};

union UserName
{
	int userId;
	char name;
	//std::string str;
};


enum Day
{
	Monday,
	Tuesday, 
	Wednesday
};


int _tmain(int argc, _TCHAR* argv[])
{
	
	//��ʼ���ṹ�岢����
	UserInfo userInfo = {1,"xiaohong","this is dog!"};
	std::cout<<userInfo.userInfo<<std::endl;

	userInfo.userInfo = "this is cat!";
	std::cout<<userInfo.userInfo<<std::endl;


	//���������
	UserName userName = {1344};
	std::cout<< userName.userId << std::endl;
	std::cout<< userName.name << std::endl;
	userName.name = 'a';
	std::cout<< userName.userId << std::endl;
	std::cout<< userName.name << std::endl;



	//ö�ٲ���
	std::cout<< Day::Monday << std::endl;
	std::cout<< Day::Tuesday << std::endl;
	std::cout<< Day::Wednesday << std::endl;


	//��ͣ
	std::system("pause");
	return 0;
}

