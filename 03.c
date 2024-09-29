#include<stdio.h>
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