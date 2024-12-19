
#include<stdio.h>
#include<string.h>
#include<stdarg.h>

int main()
{
	//定义与存储特点
	char str[] = "hello";
	char str2[] = { 'h','e','l','l','o' };
	printf("%s\n", str);  //hello
	printf("%s\n", str2);   //hello烫烫烫烫烫烫烫烫烫烫烫汤z?    没有\0，向后一直输出直到遇到一个空字符
	printf("%u\n",sizeof(str)/sizeof(char));   //6       自动补充0
	printf("%u\n", strlen(str));   //5   
	printf("%u\n", strlen(str2));  //33
	//str2不叫字符串
	//输入输出
	gets(str);
	printf("%s\n", str);
	puts(str);
	//字符串复制
	char str4[20] = "123456789";
	char str3[20] = "987";
	//strcpy(str4, str3);
	//puts(str4);    //987
    memcpy(str4,str3,2);
    puts(str4);  //983456789
    char str5[10]="111111";
    char str6[10]="000000";
    char str7[]="2";9;''
    strncpy(str5,str6,3);
    puts(str5);   //000111
    strncpy(str5,str7,3);
    puts(str5);   //2
	for(int i=0;i<6;i++) printf("%c",str5[i]);  //2111
	printf("\n");
	//字符串连接；
	strcat(str6,str7);
	puts(str6);//0000002


	return 0;
}

