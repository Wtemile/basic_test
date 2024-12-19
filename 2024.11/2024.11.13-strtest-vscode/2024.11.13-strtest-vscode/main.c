#include<stdio.h>

//冒泡排序法
void yybubble(int yyn[], int yyN)
{
    int t = 0;
    for (int i = 0; i < yyN - 1; i++)
    {
        for (int j = i; j < yyN - 1; j++)
        {
            if (yyn[j] < yyn[j + 1])
            {
                t = yyn[j];
                yyn[j] = yyn[j + 1];
                yyn[j + 1] = t;
            }
        }
    }
}
//选择排序法
void yychoice(int yyn[], int yyN)
{
    int t = 0, k = 0;
    for (int i = 0; i < yyN; i++)
    {
        k = i;
        for (int j = i; j < yyN; j++)
        {
            if (yyn[j] > yyn[k]) k = j;
        }
        t = yyn[i];
        yyn[i] = yyn[k];
        yyn[k] = t;
    }
}
//插入排序法
void yyinsert(int yyn[], int yyN)
{
    //printf("ok\n");
    for (int i = 1; i < yyN; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (yyn[i] > yyn[j])
            {
                int t = yyn[i];
                for (int k = i; k > j; k--) yyn[k] = yyn[k - 1];
                yyn[j] = t;
                break;
            }
        }
    }
}
//快速排序法
void yyquick(int yyn[], int yyN, int left, int right)
{
    int i, j, t;
    if (left < right) {
        i = left; j = right + 1;
        while (1) {
            while (i + 1 < yyN && yyn[++i] > yyn[left]);
            while (j - 1 > -1 && yyn[--j] < yyn[left]);
            if (i >= j)break;
            t = yyn[i]; yyn[i] = yyn[j]; yyn[j] = t;
        }
        t = yyn[left], yyn[left] = yyn[j], yyn[j] = t;
        yyquick(yyn, yyN, left, j - 1);
        yyquick(yyn, yyN, j + 1, right);
    }
}
//二分查找法(对于升序)
int bnsch(int yyn[], int yytgt, int left, int right)
{
    if (left > right) return -1;
    int mid = (left + right) / 2;
    if (yyn[mid] > yytgt) bnsch(yyn, yytgt, left, mid - 1);
    else if (yyn[mid] < yytgt) bnsch(yyn, yytgt, mid + 1, right);
    else return mid;
}

int cho = 0;
int min(int a, int b, int c, int d)
{
    if (a > b) { a = b; cho = 3; }
    else cho = 2;
    if (a > c) { a = c; cho = 5; }
    if (a > d) { a = d; cho = 7; }
    return a;

}

int main()
{
    //排序
    int a[10] = { 51,22,3,14,69,5,71,26,63,32 };
    int b[9] = { 51,22,3,14,69,5,71,26,63 };
    //yybubble(a,10);
    //yybubble(b,9);
    //yychoice(a,10);
    //yychoice(b,9);
    //yyinsert(a,10);
    //yyinsert(b,9);
    yyquick(a, 10, 0, 9);
    yyquick(b, 9, 0, 8);
    for (int i = 0; i < 10; i++) printf("%d ", a[i]);
    printf("\n");
    for (int i = 0; i < 9; i++) printf("%d ", b[i]);

    //查找
    printf("\n");
    int test[50];
    for (int i = 0; i < 50; i++) test[i] = i;
    printf("%d\n", bnsch(test, 23, 0, 49));
    printf("______\n");

    //空间换时间
    int fac2 = 0, fac3 = 0, fac5 = 0, fac7 = 0;
    int result[6000] = { 0 };
    result[0] = 1;
    for (int i = 1; i < 9; i++)
    {
        result[i] = min(2 * result[fac2], 3 * result[fac3], 5 * result[fac5], 7 * result[fac7]);
        switch (cho)
        {
        case 2:fac2++; break;
        case 3:fac3++; break;
        case 5:fac5++; break;
        case 7:fac7++; break;
        }
        if (2 * result[fac2] == result[i]) fac2++;
        if (3 * result[fac3] == result[i]) fac3++;
        if (3 * result[fac5] == result[i]) fac5++;
        if (3 * result[fac7] == result[i]) fac7++;
        //printf("%d %d %d %d\n",fac2,fac3,fac5,fac7);
        for (int j = 0; j <= i; j++) printf("%d ", result[j]);
        printf("\n");
    }
    printf("%d\n", result[8]);

    return 0;
}