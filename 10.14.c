#include<stdio.h>
#define STORAGE(n){\
    int h=sizeof(n);\
    for(h=8*h-1;h>=0;h--){\
        int j=n>>h&1;\
        printf("%d",j);\
    }\
    printf("\n");\
}\

/*字符输入与输出*/
/*
int main()
{
    int a=4;
    putchar(59);     //;  括号内可以为整形
    putchar('5');    //5   括号内可以放字符
    putchar('a');    //a
    putchar('1'+a);   //5   括号内可以放字符和整形的表达式
    putchar('\110');   //H
    printf("\n");
    char b,c,d;
    b=getchar();
    c=getchar();
    d=getchar();
    //输入：5回车4
    printf("%c%c%c",b,c,d);    //输出54,5和4不在一行，则c中存入了‘回车’
    return 0;
}
*/
//检验getchar的特殊性质
/*
int main()
{
    char a;
    int i=0;
    while ((a=getchar())!=EOF)    //输入a 回车 ctrl+z
    {
        putchar(a);
        i++;
    }
    printf("%d",i);
    //终端输出：
    //a
    //    (光标跳到了下一行)

    return 0;
}
*/

//设置一个可以手动在任意地方结束的循环
/*
int main()
{
    int a;
    while(a!=0)
    {
        scanf("%d",&a);
        printf("%d\n",a);
    }
    
    return 0;
}
*/

//
int main()
{
    char a,b,e;
    int c,d;
    getchar();    //12回车
    scanf("%c",&a);  //没有要求再次输入
    printf("%c\n",a);
    printf("%zu\n",sizeof(a));
    scanf("%c",&b);   //没有要求再次输入
    scanf("%c",&e);
    STORAGE(a);
    STORAGE(b);
    STORAGE(e);
    //printf("%c,%c,%c,\n",a,b,e);
    //printf("%c\n",a);   //1
    //printf("%c\n",b);   //2

    //scanf("%c",&a);    
    //scanf("%c",&b);   //没有要求再次输入
    //printf("%c,%c,\n",a,b);

    //scanf("%d",&c);
    //scanf("%d",&d);


    return 0;
}
