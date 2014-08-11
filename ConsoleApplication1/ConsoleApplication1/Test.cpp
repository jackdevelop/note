#include "stdafx.h"
#include "Test.h"


Test::Test(void)
{
}


Test::~Test(void)
{
}


void Test::init(int number)
{

	printf("\n 初始化！！！f% " , number);

}


	/**
	printf("======");

	auto t = new Test();
	t->init(3);


	auto * t2 = new Test();
	t2->init(4);
	
	
	int num[] = {4,5,5,5,7};
	int all = Test::add(num,sizeof(num)/sizeof(num[0]));
	printf("\n %d \n",all);
	**/

int Test::add(int num[],int len)
{
	Test::one = Test::one+1;	
	int all = 0;
	//int len = sizeof(num)/sizeof(int);
	//int len = _msize(num);
	printf("\n长度：%d",len);
	for (int i = 0; i < len; i++)
	{
		printf("\n %d :",num[i]);
		all = all + num[i];
	}
	return all;
}
