 #include<stdio.h>

//输出二进制存储形式
#define STORAGE(n){\
    int sizebala=sizeof(n);\
    for(sizebala=8*sizebala-1;sizebala>=0;sizebala--){\
        int onenumber=n>>sizebala&1;\
        printf("%d",onenumber);\
    }\
    printf("\n");\
}\

// //快速幂实验
// int yymod(int yylow,int yymi)
// {
//     int result=1;
//     for(yymi=yymi;yymi!=0;yymi>>=1)
//     {
//         if (yymi & 1) result*=yylow;
//         yylow*=yylow;
//     }
//     return result;

// }

// //用2的幂的和表示任意一个整数
// void binsum(int a)
// {
//     int yybin =1;
//     for(a=a;a!=0;a>>=1)
//     {
//         if (a & 1) printf("%d ",yybin);
//         yybin*=2;
//     }
// }

// //检验以上两个函数
// int main()
// {
//     printf("%d\n",yymod(10,5));   //100000
//     binsum(10);    //2 8

//     return 0;
// }

int main()
{
    // //关于%x
    // int a=-1;
    // printf("%d\n",a);
    // printf("%x\n",a);   //ffffffff
    // printf("%d\n",-1);
    // printf("%x\n",-1);  //ffffffff
    // printf("%o\n",-1);

    // //关于printf中的空格
    // printf("%d   %d\n",1,2);
    // printf("%d  % d\n",1,2);
    // printf("%d%4d\n",1,2);
    // printf("%d %4d\n",1,2);
    // //多个空格不会合并为一个

    // //关于scanf中的空格
    // int a=0;
    // int b=0;
    // scanf("%d   %d",&a,&b);  //1 2
    // printf("%d,%d",a,b);   //1,2
    // //格式控制中连续的多个空格只需要一个空格对应

    //char a='1',b='2';
    //printf("%c\n",b++);    //2
    //printf("%c\n",(b++));   //2   输出仍为2，但b的值改变了
    //printf("%c\n",b=b+1);   //3 
    //注：以上三个printf不连续执行，注释中为另外两个不存在时单独执行的结果
    //printf("%d\n",b-a);   //2
    //后置自增先使用后运算
    
    // int a=1;
    // printf("%d\n",a++);  //1
    // a=1;
    // printf("%d,%d",a++,++a);   //2,3
    // //printf会先将输出项（从右到左）入栈，再出，前置自增自减的结果为变量最终结果，后置自增自减的结果为从右到左计算过程中的临时结果
    // //本例中    ++a入，使a=2
    // //         a++入，使a=3，但a++使用的为临时结果2

    // int a=1;
    // printf("%d,%d",a=a+1,a=a+1);   //3  3
    // int a=0;
    // printf("%d,%d,%d,%d\n",a++,--a,a++,++a);

    


    return 0;
}

