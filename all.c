#include<stdio.h>


/*    2和'2'尝试
int main()
{
    int a=3;
    printf("%d\n",sizeof(a));    //输出为4
    char b='2';
    printf("%d\n",sizeof(b));   //输出为1
    return 0;
}
*/



/*   //选择语句结构探索
int main()
{
    int a;
    scanf("%d",&a);
    if (a==0) printf("0");
    else printf("1");        //正常运行
    return 0;
}
*/



/*
//循环语句结构探索
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
    printf("%d\n",a);      //11  a=a+1在范围之内
    printf("%d\n",sum);    //11  sum=sum+a不在

    a = 0;
    sum=0;
    while(a<=10) a=a+1;
        sum=sum+a;
    printf("%d\n",a);        //11 a=a+1在while语句范围之内
    printf("%d\n",sum);     //11  sum不在while语句的范围之内
    return 0;
    //当没有花括号时，while语句中只能识别一行代码,多行代码（复合语句）应使用花括号
}
*/



/*     //do  while 循环语句尝试
int main()
{
    int a=0;
    do
    {
        a=a+1;
    }while(a<=10);
    printf("%d\n",a);    //输出11
    return 0;
}
*/



/*
//习题：连续输入多个数并计算乘积，输入0时结束
//分析：需要先输入才能判断是否结束，使用do
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
    printf("%d\n",s);             //也可以实现题目要求

    return 0;

}
*/


//for 循环尝试
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
    printf("%d\n",s);      //三种均正常运行

    return 0;
}
*/



//判断一个数是否为质数
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


