#include<stdio.h>
#include<math.h>

double myExp(double x, int n)
{
    double sum = 1, temp = x;
    for(int i = 2; i <= n; i++)
    {
        sum += temp;
        temp *= x / i;
    }
    return sum;
}

double myExp(double x, double epsi)
{
    double sum = 1, temp = x;
    int count = 1;
    while(temp <= epsi)
    {
        count++;
        sum += temp;
        temp *= (double)(x / count);
    }
    return sum;
}

int main()
{
    int n = 1000;
    double x = 1.5, epsi = 0.00001;
    printf("exp(%.1lf) = %lf\n", x, exp(x));
    printf("exp(%.1lf, %d) = %lf\n", x, n, myExp(x, n));
    printf("exp(%.1lf, %lf) = %lf\n", x, epsi, myExp(x, n));
}