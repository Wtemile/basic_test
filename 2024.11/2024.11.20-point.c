#include<stdio.h>

int main()
{
    //使用不同方法遍历数组
    int a[5]={1,2,3,4,5};
    int *p=a;
    for(int i=0;i<5;i++) printf("%2d",a[i]);       //数组下标法
    printf("\n");
    for(int i=0;i<5;i++) printf("%2d",*(a+i));     //地址引用
    printf("\n");
    for(int i=0;i<5;i++) printf("%2d",p[i]);       //指针下标
    printf("\n");
    for(int i=0;i<5;i++) printf("%2d",*(p+i));     //指针引用
    printf("\n");
    //上面四种效率相同，下面最快：
    for(;p-a<5;p++) printf("%2d",*p);
    printf("\n");
    printf("\n");

    //使用不同方法遍历多维数组
    int b[3][3]={{11,12,13},{21,22,23},{31,32,33}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
            printf("%3d",b[i][j]);
        printf("\n");
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++) printf("%3d",*(*(b+i)+j));
        printf("\n");
    }
    printf("%x\t%x\n",b,*b);
    printf("%x\n",b[1]);
    printf("%x\n",*(b+2));
    int *y=b[0];
    printf("%x\t%x\n",y,y+1);
    for(;y<b[0]+9;y++)
    {
        printf("%3d",*y);
        if((y-b[0])%3==2) printf("\n");
    }


    return 0;
}