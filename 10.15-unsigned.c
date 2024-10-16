#include<stdio.h>

#define STORAGE(n){\
    int sizebala=sizeof(n);\
    printf("%d\n",sizebala);\
    for(sizebala=8*sizebala-1;sizebala>=0;sizebala--){\
        int onenumber=n>>sizebala&1;\
        printf("%d",onenumber);\
    }\
    printf("\n");\
}\

int main()
{
    //溢出
    short a=32769;
    printf("%hd\n",a);    //-32767
    a=32768;
    printf("%hd\n",a);   //-32768
    //负数赋值给usigned
    unsigned int b=-32768;
    printf("%hu\n",b);  //32768
    b=-3;
    printf("%hu\n",b);  //65533
    unsigned int e = -2;
    int d=-2;

    STORAGE(e);
    STORAGE(d);      //两种情况相同
    //printf("%d\n",e>>15&1);
    return 0;
}