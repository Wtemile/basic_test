#include<stdio.h>
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