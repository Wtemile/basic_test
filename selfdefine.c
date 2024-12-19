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

//生成随机数
void randy(int yyleft,int yyright,int yynum)
{
    int yyseed=time(0);
    srand(yyseed);
    int yywid=yyright-yyleft;
    for(int yyi=1;yyi<=yynum;yyi++)
    {
        printf("%d\n",rand()%yywid+yyleft);
    }
}

//冒泡排序法
void yybubble(int yyn[],int yyN)
{
    int t=0;
    for(int i=0;i<yyN-1;i++)
    {
        for(int j=i;j<yyN-1;j++)
        {
            if(yyn[j]<yyn[j+1]) 
            {
                t=yyn[j];
                yyn[j]=yyn[j+1];
                yyn[j+1]=t;
            }
        }
    }
}
//选择排序法
void yychoice(int yyn[],int yyN)
{
    int t=0,k=0;
    for(int i=0;i<yyN;i++)
    {
        k=i;
        for(int j=i;j<yyN;j++)
        {
            if (yyn[j]>yyn[k]) k=j;
        }
        t=yyn[i];
        yyn[i]=yyn[k];
        yyn[k]=t;
    }
}
//插入排序法
void yyinsert(int yyn[],int yyN)
{
    //printf("ok\n");
    for(int i=1;i<yyN;i++)
    {
        for(int j=0;j<i;j++)
        {
            if (yyn[i]>yyn[j])
            {
                int t=yyn[i];
                for(int k=i;k>j;k--) yyn[k]=yyn[k-1];
                yyn[j]=t;
                break;
            }
        }
    }
}
//快速排序法
void yyquick(int yyn[],int yyN,int left,int right)
{
    int i,j,t;
    if(left<right){
        i=left;j=right+1;
        while(1){
            while(i+1<yyN && yyn[++i]>yyn[left]);
            while(j-1>-1 && yyn[--j]<yyn[left]);
            if(i>=j)break;
            t=yyn[i];yyn[i]=yyn[j];yyn[j]=t;
        }
        t=yyn[left],yyn[left]=yyn[j],yyn[j]=t;
        yyquick(yyn,yyN,left,j-1);
        yyquick(yyn,yyN,j+1,right);
    }
}
//二分查找法(对于升序)
int bnsch(int yyn[],int yytgt,int left,int right)
{
    if(left>right) return -1;
    int mid=(left+right)/2;
    if(yyn[mid]>yytgt) bnsch(yyn,yytgt,left,mid-1);
    else if(yyn[mid]<yytgt) bnsch(yyn,yytgt,mid+1,right);
    else return mid;
}
//四位数最小值
int cho=0;
int min(int a,int b,int c,int d)
{
    if(a>b){a=b;cho=3;}
    else cho=2;
    if(a>c){a=c;cho=5;}
    if(a>d){a=d;cho=7;}
    return a;
    
}
//
#include<stdarg.h>
double ave(int first,...)
{
    int count=0,sum=0;
    va_list arg_ptr;
    va_start(arg_ptr,first);
    int i=first;
    while(i!=-1)
    {
        sum+=i;
        count++;
        i=va_arg(arg_ptr,int);
    }
    va_end(arg_ptr);
    return(count>0?(double)sum/count:0);
}

//欧拉筛
#define N 10000000
char vis[N+1];
int prime[N];
int euro_sieve(int n)
{
    int i=1,j=1,count=0;
    for(i=2;i<=n;i++)
    {
        if (!vis[i]) {prime[count]=i;count++;}
        //将素数加入列表并使count+1
        for(j=0;j<count && i*prime[j]<=n;j++)
        {
            vis[i*prime[j]]=1;
            if(i%prime[j]==0) break;
        }
    }
    return count;
}

