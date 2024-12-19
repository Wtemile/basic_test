#include<stdio.h>
int a = 1;
//extern int b;
//void test2()
//{
//	printf("%d\n", b);
//}   //不能声明子作用域中的函数

//关于static
static int d=5;
int e = 6;

void test()
{
	printf("%d\n",a);
}

int main()
{
	//有关定义屏蔽
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

	//有关extern
	//int b = 4;
	//test2();

	//关于static
	printf("%d\n", d);
	printf("%d\n", e);
	//任意一个文件中加static均可  
	

	return 0;
}