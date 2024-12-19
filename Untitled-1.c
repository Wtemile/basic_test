#include<stdio.h>
#define num 2147483647
#define STORAGE(n){\
    int sizebala=sizeof(n);\
    for(sizebala=8*sizebala-1;sizebala>=0;sizebala--){\
        int onenumber=n>>sizebala&1;\
        printf("%d",onenumber);\
    }\
    printf("\n");\
}\


int main()
{
    int in=num;
    unsigned int uin=num;
    short sh=num;
    unsigned short ush = num;
    char ch = num;
    unsigned char uch = num;

    STORAGE(in);
    STORAGE(uin);
    STORAGE(sh);
    STORAGE(ush);
    STORAGE(ch);
    STORAGE(uch);


    return 0;
}