#include<stdio.h>
int a = 1;
//extern int b;
//void test2()
//{
//	printf("%d\n", b);
//}   //�����������������еĺ���

//����static
static int d=5;
int e = 6;

void test()
{
	printf("%d\n",a);
}

int main()
{
	//�йض�������
	int a = 2;
	printf("%d\n", a);     //2
	test();   //1
	for (int i = 1; i <= 1; i++)
	{
		int a = 3;     
		printf("%d\n", a);  //3
	}
	printf("%d\n", a);   //2
	test();    //1

	//�й�extern
	//int b = 4;
	//test2();

	//����static
	printf("%d\n", d);
	printf("%d\n", e);
	//����һ���ļ��м�static����  
	

	return 0;
}