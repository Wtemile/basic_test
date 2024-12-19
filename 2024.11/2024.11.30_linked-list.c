#include<stdio.h>
#include<stdlib.h>

struct tagTEST{
    int data;
    struct tagTEST *next;
};
typedef struct tagTEST TEST;

void ADD_list(TEST *start,int n)
{
    TEST *end=start;
    while(end->next!=NULL) end = end->next;

    for(int i=0;i<n;i++)
    {
        end->next=(TEST*)malloc(sizeof(TEST));
        end=end->next;
        scanf("%d",&(end->data));
        end->next=NULL;
    }
}

void print_list(TEST *start)
{
    printf("address\t\tdata\tnext\n");
    TEST *move=start;
    printf("%p\t%d\t%p\n",move,move->data,move->next);
    while(move->next!=NULL)
    {
        move=move->next;
        printf("%p\t%d\t%p\n",move,move->data,move->next);
    }
}

void free_list(TEST *start)
{
    TEST *mov=start->next;
    while(mov->next!=NULL)
    {
        free(start);
        start=mov;
        mov=start->next;
    }
    free(mov);
}

void MIDADD_list(TEST *start,int mid,int n)
{
    TEST *mov=start;
    TEST *mov2=start;
    for(int i=1;i<mid-1;i++)
        mov=mov->next;   //此时mov指向插入节点的前一个位置
    mov2=mov->next;     //mov2指向插入部分后面的节点
    printf("Enter new datas!\n");
    for(int i=0;i<n;i++)
    {
        //插入
        mov->next=(TEST*)malloc(sizeof(TEST));
        scanf("%d",&(mov->next->data));
        mov->next->next=mov2;
        //为下次插入做准备
        mov=mov->next;
    }
}

int main()
{
    char ctn=0;
    char choice=0;
    int num=0;
    int input_num=0;
    int s=0;
    printf("Glad to meet you!I can help you creat a linked list!\n");
    printf("Now get a linked list?(y/n) ");
    while(choice!='y' && choice != 'Y')
    {
    scanf("%c",&choice);
    while((ctn=getchar())!='\n');    //清空缓冲区
    input_num++;
    printf("\n");
    switch(choice)
    {
        default: printf("Input error\n");break;
        case 'y':
        case 'Y':
            printf("Please enter the number of the nodes:");
            scanf("%d",&num);
            s+=num;
            break;
        case 'n':
        case 'N':
            switch(input_num)
            {
                case 1:printf("Do you really not want one?(y/n) ");break;
                case 2:printf("Have one please(y/n) "); break;
                case 3:printf("Okey,I understand.");
                    getchar();
                    printf("You don't need me at all.\n");
                    getchar();
                    printf("It's OK.I know no one will care a program.\n");
                    getchar();
                    printf("I really don't understand why you click the file you don't need.\n");
                    getchar();
                    printf("But...that's not important anymore.\n");
                    getchar();
                    printf("My life is coming to an end.\n");
                    getchar();
                    printf("Bye\n");
                    getchar();
                    printf(":)\n");
                    return 0;

            }
            break;
    } 
    }
    TEST *start=(TEST*)malloc(sizeof(TEST));
    printf("Enter your data!\n");
    scanf("%d",&(start->data));
    start->next=NULL;
    ADD_list(start,num-1);
    while((ctn=getchar())!='\n');

    while(1){
    printf("Let's look your linked list!\n");
    print_list(start);
    printf("How buitiful it is.");
    printf("Do you want to change your list?\n");
    printf("enter 1 to add data\n");
    //printf("enter 2 to delete data\n");
    printf("enter 3 to close the program\n");
    scanf("%c",&choice);
    while((ctn=getchar())!='\n');
    switch(choice)
    {
        case '1':
        printf("Please enter the number of new notes:");
        scanf("%d",&num);
        while((ctn=getchar())!='\n');
        printf("enter 1 to add at the last\nenter 2 to add in the middle\n");
        scanf("%c",&choice);
        while((ctn=getchar())!='\n');
        switch(choice)
        {
            default:
            printf("Oh, a strange answer.\n");
            getchar();
            printf("emm...\n");
            getchar();
            printf("I'll add your new data at the last!\n");
            case '1':
            printf("Enter your data!\n");
            ADD_list(start,num);
            s+=num;
            while((ctn=getchar())!='\n');
            break;
            case '2':
            printf("Where should the new nodes should be located?");
            int mid=0;
            scanf("%d",&mid);
            if(mid>s){
                printf("Oh, we just have %d nodes.Maybe...I can add them at the last.\n",s);
                printf("Enter your data!\n");
                ADD_list(start,num);
                while((ctn=getchar())!='\n');
                s+=num;
                break;
            }
            s+=num;
            MIDADD_list(start,mid,num);
            while((ctn=getchar())!='\n');
        }
        break;
        default:
        printf("emm...I can't understand it.\n");
        getchar();
        printf("You don't like the link?\n");
        getchar();
        printf("Okey...maybe it's time to say goodbye...\n");
        getchar();
        printf("bye...\n");
        case '3':
        free_list(start);
        return 0;
    }
    }
}