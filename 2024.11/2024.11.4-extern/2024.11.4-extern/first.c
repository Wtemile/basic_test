#include<stdio.h>
extern void test();

extern int a;    //30
//extern int b = 20;   报错：已定义    其它文件中已初始化的变量在用extern声明时不能出现初始化
//extern int d;   报错：无法识别
extern int e = 20;   //在其它文件中未初始化时可以出现初始化
int main()
{
	extern int c;   //30
	printf("a=%d,c=%d,e=%d\n", a,  c, e);
	test();
	printf("\n");
	printf("%s\n", __DATE__);
	printf("%s\n", __TIME__);
	printf("%s\n", __FILE__);
	printf("%d\n", __LINE__);
	//printf("%d\n", __STDC__);
	
	return 0;
}
