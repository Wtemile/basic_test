#include<stdio.h>


/*    2��'2'����
int main()
{
    int a=3;
    printf("%d\n",sizeof(a));    //���Ϊ4
    char b='2';
    printf("%d\n",sizeof(b));   //���Ϊ1
    return 0;
}
*/



/*   //ѡ�����ṹ̽��
int main()
{
    int a;
    scanf("%d",&a);
    if (a==0) printf("0");
    else printf("1");        //��������
    return 0;
}
*/



/*
//ѭ�����ṹ̽��
int main()
{
    int a = 0;
    int sum = 0;
    while (a<=10)
    {
        a=a+1;
        sum=sum+a;
    }
    printf("%d\n",a);       //11
    printf("%d\n",sum);     //66

    a = 0;
    sum = 0;
    while(a<=10)
        a=a+1;
        sum=sum+a;
    printf("%d\n",a);      //11  a=a+1�ڷ�Χ֮��
    printf("%d\n",sum);    //11  sum=sum+a����

    a = 0;
    sum=0;
    while(a<=10) a=a+1;
        sum=sum+a;
    printf("%d\n",a);        //11 a=a+1��while��䷶Χ֮��
    printf("%d\n",sum);     //11  sum����while���ķ�Χ֮��
    return 0;
    //��û�л�����ʱ��while�����ֻ��ʶ��һ�д���,���д��루������䣩Ӧʹ�û�����
}
*/



/*     //do  while ѭ����䳢��
int main()
{
    int a=0;
    do
    {
        a=a+1;
    }while(a<=10);
    printf("%d\n",a);    //���11
    return 0;
}
*/



/*
//ϰ�⣺������������������˻�������0ʱ����
//��������Ҫ����������ж��Ƿ������ʹ��do
int main()
{
    int a =1;
    int s = 1;
    do
    {
        s=s*a;
        scanf("%d",&a);
    }while(a!=0);
    printf("%d\n",s);


    a = 1,s=1;
    while(a!=0)
    {
        s=s*a;
        scanf("%d",&a);
    }
    printf("%d\n",s);             //Ҳ����ʵ����ĿҪ��

    return 0;

}
*/


//for ѭ������
/*
int main()
{
    int a,s;
    for(a=1,s=1;a!=0;scanf("%d",&a)) s=s*a;
    printf("%d\n",s);

    for(a=1,s=1;a!=0;scanf("%d",&a))
        s=s*a;
    printf("%d\n",s);

    for(a=1,s=1;a!=0;scanf("%d",&a))
    {
        s=s*a;
    }
    printf("%d\n",s);      //���־���������

    return 0;
}
*/



//�ж�һ�����Ƿ�Ϊ����
/*
int main()
{
    int a;
    scanf("%d",&a);
    int i = 2;
    int b;
    while(i<a)
    {
        b=a%i;
        if (b == 0)
        {
            printf("NO\n");
            break;
        }
        else
        {
            i=i+1;
        }
    }
    if (i==a) printf("YES\n");



    i=2;
    while(i<a)
    {
        if (a%i==0) break;
        else i=i+1;
    }
    if (i==a) printf("yes\n");
    else printf("no\n");




    for(i=2;i<a;i=i+1)
        if(a%i==0) break;
    if(i==a) printf("yes\n");
    else printf("no\n");




    return 0;
}
*/


