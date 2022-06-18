#include<stdio.h>

void input(int* num, int *den);
void simplify(int *num, int *den);
void display(int num, int den);

int main()
{
    int numerator, denominator;
    input(&numerator, &denominator);
}

void input(int *num, int *den)
{
    *num = 0; *den = 0;
    scanf("%d", num);
    while(!*den)
    {
        scanf("%d", den);
    }
    simplify(num, den);
}

void simplify(int *num, int *den)
{
    int a = *num, b = *den;
    while(a != b && a > 0 && b > 0)
    {
        if(a > b) a -= b;
        if(a < b) b -= a;
    }
    printf("%d/%d\n=\n", *num, *den);
    if(a != 1)
    {
        *num /= a;
        *den /= a;
    }
    display(*num, *den);
}

void display(int num, int den)
{
    printf("%d/%d\n", num, den);
}