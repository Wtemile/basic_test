#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// #define STORAGE(n){\
//     int sizebala=sizeof(n);\
//     for(sizebala=8*sizebala-1;sizebala>=0;sizebala--){\
//         int onenumber=n>>sizebala&1;\
//         printf("%d",onenumber);\
//     }\
//     printf("\n");\
// }\


// typedef union TEST{
//     int binary;
//     float fl;
// } TEST;

// int main()
// {
//     char a[]="abc",b[]="abcde",c[]="abc";
//     printf("%d",strcmp(a,b));      //-1
//     printf("%3d",strcmp(b,a));      //1
//     printf("%3d\n",strcmp(a,c));      //0

//     double d=3.1415926;
//     printf("%.4g\n",d);   //3.142
//     printf("%4g\n",d);   //3.14159   width只扩展不截断

//     TEST tst1;
//     tst1.binary=1;
//     tst1.binary+=tst1.binary<<1;
//     tst1.binary+=tst1.binary<<2;
//     tst1.binary+=tst1.binary<<4;
//     tst1.binary<<=23;
//     STORAGE(tst1.binary);
//     printf("%f\n",tst1.fl);
// }


// #include<stdio.h>

// struct s
// {
//     int i1;
//     struct s *i2,*i0;
// };

// static struct s a[3]={{2,&a[1],0},{0,0,0},{0,0,0}},*ptr=a;

// int main()
// {
//     int a = 2;
//     int *p = &a;
//     printf("%p ",++ptr->i0);
//     printf("%p", p);
//     return 0;
// } 

// int main()
// {
//     int a=1;


//     return 0;
// }


int abc(x,y)
{
    long long up=1,down=1;
    for(int i=0;i<y;i++) up*=x-i;
    for(int i=1;i<=y;i++) down*=i;
    return up/down;
}

int main()
{
    int px=0,py=0,bx=0,by=0;
    while(1){
        scanf("%d%d%d%d",&bx,&by,&px,&py);
        if(bx<=0 || by<=0 || px<=0 || py<=0) break;
        if(px<=bx && py<=px)
            printf("%d\n",abc(bx+by-2,bx-1)-abc(px+py-2,px-1)*abc(bx+by-px-py,bx-px));
        else printf("%d\n",abc(bx+by-2,bx-1));
    }

    return 0;
}
