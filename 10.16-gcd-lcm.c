#include<stdio.h>

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

/*
int main()
{
    int a=6,b=9;
    int c=0;
    c=gcd(a,b);
    int d=lcm(a,b);
    printf("gcd=%d\n",c);    //3
    printf("lcm=%d\n",d);    //18
}
*/

int main()
{
    int a=10;
    double h =10;
    double b=1.2345;
    double c=3.14e+1;
    double d=3.14e-9;

    printf("%o\n",a);    //12
    printf("%e,%e\n",b,c);   //1.234500e+000,3.140000e+001
    printf("%f,%f\n",b,c);   //1.234500,31.400000
    printf("%g,%g\n",b,c);   //1.2345,31.4
    printf("%g\n",d);     //3.14e-009

    printf("————————————————\n");
    printf("%5d\n",a);     //   10默认右对齐,左侧补空格 5位输出的位数
    printf("%05d\n",a);    //00010   变成补0
    printf("%-5d\n",a);    //10   变成左对齐
    printf("%+d\n",a);      //+10    标明正负
    printf("% d\n",a);      // 10    输出值前加空格
    printf("% +d\n",a);     //+10    空格和+同时出现时忽略空格
    printf("% d\n",-10);     //-10   为负号时也忽略
    printf("%x\n",a);      //a
    printf("%#x\n",a);     //0xa     如果type为十六进制整数（x/X）则输出之前加0x/0X
    printf("%#o\n",10);    //012
    //printf("%f\n",h);
    //printf("%#f\n",h);
    printf("%#g\n",c);    //31.4000    阻止截断尾部的0

    printf("%03o\n",10);   //012
    printf("%#05x\n",10);   //0x00a
    printf("%#-05x\n",10);  //0xa    //有-时05被忽略
    
    printf("%f\n",123.12345678);    //123.123457   默认6位
    printf("%.4g\n",123.1234567);  //123.1    规定有效位数
    printf("%g\n",123.1234567);  



    return 0;
}