
#include<stdio.h>
#include<string.h>

int main()
{
	//������洢�ص�
	char str[] = "hello";
	char str2[] = { 'h','e','l','l','o' };
	printf("%s\n", str);  //hello
	printf("%s\n", str2);   //hello��������������������������z?    û��\0�����һֱ���ֱ������һ�����ַ�
	printf("%llu\n",sizeof(str)/sizeof(char));   //6       �Զ�����0
	printf("%lld\n", strlen(str));   //5   
	printf("%lld\n", strlen(str2));  //33
	//str2�����ַ���
	//�������
	gets(str);
	printf("%s\n", str);
	puts(str);
	//�ַ�������
	char str4[20] = "123456789";
	char str3[20] = "987";
	strcpy(str4, str3);
	puts(str4);



	return 0;
}