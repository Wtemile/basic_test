
#include<stdio.h>
#include<string.h>

int main()
{
	//定义与存储特点
	char str[] = "hello";
	char str2[] = { 'h','e','l','l','o' };
	printf("%s\n", str);  //hello
	printf("%s\n", str2);   //hello烫烫烫烫烫烫烫烫烫烫烫汤z?    没有\0，向后一直输出直到遇到一个空字符
	printf("%llu\n",sizeof(str)/sizeof(char));   //6       自动补充0
	printf("%lld\n", strlen(str));   //5   
	printf("%lld\n", strlen(str2));  //33
	//str2不叫字符串
	//输入输出
	gets(str);
	printf("%s\n", str);
	puts(str);
	//字符串复制
	char str4[20] = "123456789";
	char str3[20] = "987";
	strcpy(str4, str3);
	puts(str4);



	return 0;
}