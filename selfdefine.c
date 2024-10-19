#include<stdio.h>


//定义一个转二进制函数（见10.7）
void binary(int n)
{
    int onenumber;
    onenumber=n>>31&1;
    if(onenumber==1)                //对负值进行处理
    {
        printf("-");
        n=-n;               //负值以补码形式存储，不便于直接移位得到二进制数
    }
    onenumber = 0;
    int onebyone;
    for(onebyone=30;onenumber==0;onebyone--)      //去掉前面大串多余的0    相较于10.7优化：直接使用i来控制循环
    {
        onenumber=n>>onebyone&1;
    }
    for(onebyone=onebyone+1;onebyone>=0;onebyone--) printf("%d",n>>onebyone&1);
    n=-n;
    printf("\n");      //换行

}


//输出二进制存储形式
#define STORAGE(n){\
    int sizebala=sizeof(n);\
    for(sizebala=8*sizebala-1;sizebala>=0;sizebala--){\
        int onenumber=n>>sizebala&1;\
        printf("%d",onenumber);\
    }\
    printf("\n");\
}\


//最小公倍数（法一，不建议）
long LCmutiple(long yynum1,long yynum2)
{
    if (yynum1<0) yynum1=-yynum1;
    if(yynum2<0) yynum2 = -yynum2;     //取绝对值
    long yytry,yyleft1=1,yyleft2=1;
    for(yytry=max(yynum1,yynum2);yyleft1!=0 || yyleft2!=0;yytry++)   //易错：1.对yyleft1\2赋值，保证一开始能进入循环,同时保证第二次使用能进入循环  2.两个余数中只要有一个不等于0就要继续，应该使用逻辑或
    {
        yyleft1=yytry%yynum1;
        yyleft2=yytry%yynum2;    //注意：谁除以谁
    }
    return yytry-1;     //注意：最后一次循环会使yytry多加一个1
}


//最大公约数    辗转相除法
int gcd(int yynum1,int yynum2)
{
    if(yynum1%yynum2) gcd(yynum2,yynum1%yynum2);
    else return yynum2;
}


//最小公倍数
int lcm(int yynum1,int yynum2)
{
    return yynum1*yynum2/gcd(yynum1,yynum2);
}

//快速幂
int yymod(int yylow,int yymi)
{
    int result=1;
    for(yymi=yymi;yymi!=0;yymi>>=1)
    {
        if (yymi & 1) result*=yylow;
        yylow*=yylow;
    }
    return result;

}

//用2的次方的和表示任意一个整数
void binsum(int a)
{
    int yybin =1;
    for(a=a;a!=0;a>>=1)
    {
        if (a & 1) printf("%d ",yybin);
        yybin*=2;
    }
}