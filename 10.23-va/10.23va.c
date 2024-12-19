#include<stdio.h>
#include<stdarg.h>
#include<stdlib.h>
#include<time.h>

//va
// double ave(int first,...)
// {
//     int count=0,sum=0;
//     va_list arg_ptr;
//     va_start(arg_ptr,first);
//     int i=first;
//     while(i!=-1)
//     {
//         sum+=i;
//         count++;
//         i=va_arg(arg_ptr,int);
//     }
//     va_end(arg_ptr);
//     return(count>0?(double)sum/count:0);
// }

// int main()
// {
//     printf("%lf\n",ave(1,2,3,-1));

//     return 0;
// }


// //rand
// int main()
// {
//     srand(1);
//     printf("%d\n",rand());
//     printf("%d\n",rand());
//     srand(1);
//     printf("%d\n",rand());
//     printf("%d\n",rand());   //相同的种子生成的随机数相同
//     srand(2);
//     printf("%d\n",rand());
//     printf("%d\n",rand());

//     return 0;
// }




// //产生[0，20）的十个随机数
// int main()
// {
//     int seed = time(0);
//     srand(seed);
//     for(int i=1;i<=10;i++)
//     {
//         printf("%d\n",rand()%20);
//     }

//     return 0;
// }

// //产生（0，1）的十个随机数
// int main()
// {
//     int seed = time(0);
//     srand(seed);
//     for(int i=0;i<10;i++)
//     {
//         printf("%.2lf\n",(double)rand()/RAND_MAX);
//     }

//     return 0;
// }

// void randy(int yyleft,int yyright,int yynum)
// {
//     int yyseed=time(0);
//     srand(yyseed);
//     int yywid=yyright-yyleft;
//     for(int yyi=1;yyi<=yynum;yyi++)
//     {
//         printf("%d\n",rand()%yywid+yyleft);
//     }
// }

// int main()
// {
//     int a=0,b=0,m=0;
//     scanf("%d%d%d",&a,&b,&m);
//     randy(a,b,m);

//     return 0;
// }

// //迭代算法-斐波那契数列
// int main()
// {
//     int f1=0,f2=1,fn=0;
//     for(int i=1;i<=10;i++)
//     {
//         fn=f1+f2;
//         f1=f2;f2=fn;
//         printf("%d\n",f1);
//     }

//     return 0;
// }


// //循环测试
// int main()
// {
//     int sum=0;
//     for(int i=1;i<=5;i++)
//     {
//         sum+=i;
//     }
//     printf("%d\n",sum);

//     return 0;
// }

// int main()
// {
//     char ch =97;
//     switch(ch)
//     case 'a': {printf("yes\n");break;}

//     return 0;
// }

