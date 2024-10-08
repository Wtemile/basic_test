#include<stdio.h>

//定义一个转二进制函数（见10.7）
void binary(int n)
{
    int y;
    y=n>>31&1;
    if(y==1)                //对负值进行处理
    {
        printf("-");
        n=-n;               //负值以补码形式存储，不便于直接移位得到二进制数
    }
    int i,m=0;
    for(i=30;m==0;i--)      //去掉前面大串多余的0    相较于10.7优化：直接使用i来控制循环
    {
        m=n>>i&1;
    }
    for(i=i+1;i>=0;i--) printf("%d",n>>i&1);
    n=-n;
    printf("\n");      //换行

}


//检验函数
/*
int main()
{
    int n;
    scanf("%d",&n);     
    binary(n);         //可以执行

    return 0;
}
*/

//宏定义测试
//#define M y*y
//#define max1(a,b) (a)>(b)?(a):(b)
//#define max2(a,b) ((a)>(b)?(a):(b))      //最外侧括号防止后期使用时出现bug


//检验宏定义测试
/*
int main()
{
    //printf("%d\n",M);      //报错：y未定义
    int y=2;
    printf("%d\n",M);      //4   
    //int M=4;         //当变量名完全与宏名相同时会发生替换
    printf("%d\n",max1(5,3));    //5
    printf("%d\n",max2(5,3));   //5
    int a=max2(3,5);
    int b=(5);
    printf("%d,%d\n",a,b);          //有括号不影响结果。（5）为一个表达式，计算结果为5
   
    return 0;
}
*/

//多行宏定义
/*
#define N(n) {\
    int i,j;\
    for(i=1;i<=n;i++){\
        for(j=1;j<=i;j++)\
            printf("*");\
        printf("\n");\
    }\
}\

int main()
{
    N(5);
    return 0;
}
*/

//定义一个弘来输出数据的存储格式
//不用函数：函数参数有数据类型，但此处的参数可能为任意数据类型

#define STORAGE(n){\
    int a=sizeof(n);\
    for(a=8*a-1;a>=0;a--){\
        int b=n>>a&1;\
        printf("%d",b);\
    }\
    printf("\n");\
}\

//宏定义试验
/*
int main()
{
    int num=4;
    STORAGE(num);    //正确
    char ch='a';
    STORAGE(ch);     //正确
    
    return 0;
}
*/




//隐式类型转换：将整形赋值给字符型
int main()
{
    char ch = 555;          
    printf("%c\n",ch);
    printf("%d\n",ch);
    binary(ch);      //101011
    binary(555);    //1000101011
    STORAGE(ch);     //00101011
    STORAGE(555);    //00000000000000000000001000101011
    //只将整形的后八位存储到了浮点型中，其余部分舍弃

    return 0;
}
