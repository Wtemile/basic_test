#include<stdio.h>
extern void test();

extern int a;    //30
//extern int b = 20;   �����Ѷ���    �����ļ����ѳ�ʼ���ı�������extern����ʱ���ܳ��ֳ�ʼ��
//extern int d;   �����޷�ʶ��
extern int e = 20;   //�������ļ���δ��ʼ��ʱ���Գ��ֳ�ʼ��
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
