#include<stdio.h>
#include<math.h>

//�ݹ麯��  ���һ������ÿһλ
void count(int a)
{
    if (a / 10) count(a / 10);
    printf("%d ", a % 10);
}
//�ݹ麯������׳�
int fac(int n)
{
    if (n <= 1) return 1;
    else return n * fac(n - 1);
}
//���
double f(double x)
{
    return x * x * x - 3 * x - 1;
}
double result(double a, double b)
{
    double point = (a * f(b) - b * f(a)) / (f(b) - f(a));
    if (fabs(f(point)) <= 0.00001) return point;
    else if (f(point) * f(a) <= 0) result(a, point);
    else result(point, b);
}



int main()
{
    count(456);
    printf("\n");
    printf("%d\n", fac(3));

    //��������׳�
    int n = 3;
    int j = 1;
    for (int i = 2; i <= n; i++)
    {
        j *= i;
    }
    printf("%d\n", j);

    printf("%lf\n", result(1.0, 2.0));

    return 0;
}