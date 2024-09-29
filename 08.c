#include<stdio.h>
//判断一个数是否为素数
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