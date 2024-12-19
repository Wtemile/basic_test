#include<stdio.h>

int main()
{
    int a=1,*p=&a;
    printf("a=%d,address=%x\n",a,p);
    printf("a=%d,address=%x\n",a,&a);
    printf("%p,%p\n",p,&a);
    //一些练习
    a=1;
    int b=2,c=3;
    int *p1=&a,*p2=&b,*p3=&c;
    printf("%d\n",*p1);
    scanf("%d",p2);
    *p3=*p1+*p2;
    p1=p3;
    printf("%d\n",*p1);


    //指针运算
    int test[5]={0,1,2,3,4};
    char str[5]="abcd";
    char *pp=str;
    int *pp2=test;
    //pp+=2;
    printf("%s\n",pp);   //abcd  输出从所指的位置开始的字符串
    printf("%p\n",pp2);    //输出数组的地址
    pp+=1;
    char *pp3=&str[2];
    printf("%s\n",pp);  //bcd
    printf("%s\n",pp3);  //cd
    pp2+=1;
    printf("%d\n",*pp2);   //1
    int *pp4=&test[4];
    int h=pp4-pp2;
    printf("%d\n",h);  //3


    return 0;
}