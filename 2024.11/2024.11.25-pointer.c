#include<stdio.h>
#include<string.h>

int main()
{
    //指针与多维数组
    int a[2][5]={{1,2,3,4,5},{6,7,8,9,10}};
    int (*pp)[5]=a;
    printf("%d\n",a[0]);
    printf("%d\n",a[1]);
    while(pp-a<2)
    {
        for(int i=0;i<5;i++) printf("%d  ",*(*pp+i));   
        printf("\n");
        pp++;
    }                    
    //输出1 2 3 4 5
        //6 7 8 9 10
    pp=a;
    while(pp-a<2)
    {
        for(int i=0;i<5;i++) printf("%d  ",(*pp)[i]);     //*pp[i]输出错误
        printf("\n");
        pp++;
    } 

    //指针与字符串
    char str[]="abcde";
    char *p=str;
    while(*p)
    {
        printf("%c ",*p);   //a b c d e
        p++;
    }
    p=str;   //重新指向str，否则变为迷途指针
    printf("\n");
    printf("%s",p);   //abcde

    //指针与字符串数组
    char *pa[4]={"abc","c++","elsa","loyal"};
    char **ps=pa;
    while(ps-pa<6)
    {
        printf("%s\n",*ps);
        ps++;
    }


    return 0;
}