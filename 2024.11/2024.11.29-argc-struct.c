#include<stdio.h>
#include<stdlib.h>

//带参数的main函数
// int a=2,b=3;
// int main(int argc,char *argv[])
// {
//     int i=0;
//     printf("%d,%d\n",a,b);
    
//     if(argc>0)
//     {
//         printf("argc:%u\n",argc);
//         printf("program:%s",argv[0]);
//         for(i=1;i<argc;i++)
//         {
//             printf("%s\n",argv[i]);
//         }

//     }

//     return 0;
// }


//结构体
struct tagDATE{
    int year;
    int mouth;
    int day;
};                  //结尾分号
typedef struct tagDATE DATE;   

struct tagSTUDENT{
    int no;
    char name[21];
    DATE birthday;     //成员可以为结构体
    double score;   //比真实位数多一来存放\0
};                
typedef struct tagSTUDENT STU;    //struct和结构类型名整体作为类型名称 且结构类型名一般为大写

int main()
{
    int N=0;
    scanf("%d",&N);
    STU *p=(STU *)calloc(N,sizeof(STU));
    for(int i=0;i<N;i++)
        scanf("%d %s %d.%d.%d %lf",&((p+i)->no),&((p+i)->name),&((p+i)->birthday.year),&((p+i)->birthday.mouth),&((p+i)->birthday.day),&((p+i)->score));
    while(1)
    {printf("enter 1 to check all information\nenter 2 to add new students\nenter 3 to sort the students and close the program");
    int choice=0;
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        for(int i=0;i<N;i++) printf("%d\t%s\t%d\t%d\t%d\t%lf\n",(p+i)->no,(p+i)->name,(p+i)->birthday.year,(p+i)->birthday.mouth,(p+i)->birthday.day,(p+i)->score);
        break;
        case 2:
        printf("Please enter the number of new students:");
        int add=0;
        scanf("%d",&add);
        p=(STU*)realloc(p,(N+add)*sizeof(STU));
        printf("Please enter the information of new students\n");
        for(int i=N;i<N+add;i++)
        scanf("%d %s %d.%d.%d %lf",&((p+i)->no),&((p+i)->name),&((p+i)->birthday.year),&((p+i)->birthday.mouth),&((p+i)->birthday.day),&((p+i)->score));
        N+=add;
        break;
        case 3:
        printf("Sort the students according to the scores:\n");
        STU t;
        for(int i=0;i<N-1;i++)
        for(int j=i;j<N;j++) if((p+i)->score<(p+j)->score) t=*(p+i),*(p+i)=*(p+j),*(p+j)=t;
        for(int i=0;i<N;i++) printf("%d\t%s\t%d\t%d\t%d\t%lf\n",(p+i)->no,(p+i)->name,(p+i)->birthday.year,(p+i)->birthday.mouth,(p+i)->birthday.day,(p+i)->score);
        free(p);
        return 0;
    }
    }

    free(p);
    return 0;
}