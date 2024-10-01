#include<stdio.h>

/*  //if语句的嵌套一
int main()
{
    int a;
    printf("Please enter your score: ");
    scanf("%d",&a);
    if (a>=90) printf("your rating is A\n");
    else if (a>=80) printf("your rating is B\n");
    else printf("your rating is C\n");


    return 0;
}
*/

/*
//if 语句的嵌套二
int main()
{
    int a;
    scanf("%d",&a);
    if (a>=0)
    {
        if (a>=80)
        {
            if (a>=90) printf("A");          //使用花括号便于明确else对应的if
            else printf("B");
        }
        else printf("C");
    }
    else printf("error");
    

    return 0;
}
*/

//选择语句练习
/*  一：将四个数按从小到大的顺序排列
int main()
{
    printf("Please enter four different numbers\n");
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
        }
    }

    return 0;
}
*/        //种类过多  又上述可简化为if(a>b && b>c && c>d) 但即使如此也有4！=24种分支

/*！！！！！！！！！！！！！！！！！*/
/*
int main()
{
    printf("Please enter four different numbers\n");
    int a,b,c,d,t;         //t用于abcd之间数值交换时的过渡
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b) t=a,a=b,b=t;    //使ab交换数值
    if(a>c) t=a,a=c,c=t;
    if(a>d) t=a,a=d,d=t;    //到这一步实现了a为四个数中最小的数
    if(b>c) t=b,b=c,c=t;
    if(b>d) t=b,b=d,d=t;   //到这一步是实现了b为四个数中第二小的数
    if(c>d) t=c,c=d,d=t;
    printf("%d %d %d %d\n",a,b,c,d);

//重要的不是比较abcd的大小，而是比较四个数的大小
//利用abcd作为“变量”而非“常量”的性质
//要有设置辅助变量，即本题中的t的意识

    return 0;
}
*/


