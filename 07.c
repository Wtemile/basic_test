#include<stdio.h>
//for循环尝试
int main()
{
    int a,s;
    for(a=1,s=1;a!=0;scanf("%d",&a)) s=s*a;
    printf("%d\n",s);

    for(a=1,s=1;a!=0;scanf("%d",&a))
        s=s*a;
    printf("%d\n",s);

    for(a=1,s=1;a!=0;scanf("%d",&a))
    {
        s=s*a;
    }
    printf("%d\n",s);      //三种均正常运行

    return 0;
}