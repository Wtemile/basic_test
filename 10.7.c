#include<stdio.h>

//比较运算符通常不使用连续比较
/*
int main()
{
    int a=5;
    int b=0;
    int c=-5;
    int b2=9;
    if(a>b>c) printf("yes\n");    //表达式判定为真
    if(a>b2>c) printf("yes\n");   //表达式判定为真
    return 0;
}
//相当于：先将a和b进行比较，得出逻辑值1或0，再将该逻辑值与c比较
*/

//expr!=0 与 expr等价
/*
int main()
{
    int a =5;
    if(a) printf("yes");    //输出yes     非零表示真，零表示假

    return 0;
}
*/

//条件运算符
/*
int y(int x)
{
    if(x<=0) return -x;
    else return x;
}

int main()
{
    int x;
    int y2;
    scanf("%d",&x);
    printf("%d\n",y(x));     //分段函数方式一：定义函数
    y2=x<=0?-x:x;
    printf("%d\n",y2);
    printf("%d\n",x<=0?-x:x);   //二：使用条件运算符  （三：使用条件语句）

    return 0;
}
*/


//尝试：使用位运算符将十进制数转换为二进制
/*
int main()
{
    printf("Please enter a positive number less than 128");
    int n;
    scanf("%d",&n);
    int a,b,c,d,e,f,g;
    a=n&1;
    b=n>>1&1;
    c=n>>2&1;
    d=n>>3&1;
    e=n>>4&1;
    f=n>>5&1;
    g=n>>6&1;
    printf("0%d%d%d%d%d%d%d\n",g,f,e,d,c,b,a);



    return 0;
}
*/
/*  范围扩大至所有int
int main()
{
    int n;
    printf("Please enter a number:");
    scanf("%d",&n);
    int i,f;
    if(n>>31&1==1)
    {
        printf("-");
        n=-n;
    }
    for(i=30,f=1;f<=31;f++,i--)
    {
        printf("%d",n>>i&1);
    }
    

    return 0;
}
*/
/*去掉前面多余的0
int main()
{
    int n;
    printf("Please enter a number:");
    scanf("%d",&n);
    int y;
    y=n>>31&1;
    if(y==1)
    {
        printf("-");
        n=-n;
    }
    int i,f,m=0;
    for(i=30,f=1;m==0;i--,f++) 
    {
        m=n>>i&1;
    }
    for(i=i+1,f=f-1;f<=31;f++,i--) printf("%d",n>>i&1);


    return 0;
}
*/


