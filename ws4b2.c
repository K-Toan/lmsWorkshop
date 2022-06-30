#include<stdio.h>
#include<math.h>

int roots(double a, double b, double c, double *x1, double *x2);

int main()
{
    double a, b, c, x1 = 0, x2 = 0;
    roots(a, b, c, &x1, &x2);
}

int roots(double a, double b, double c, double *x1, double *x2)
{
    scanf("%lf%lf%lf", &a, &b, &c);
    printf("\n2. Solve the equation\n");
    
    if(a == 0)
    {
        printf("There is one real root: x0 = %lf", -c / b);
    }
    else
    {
        double delta = b * b - 4 * a * c;
        if(delta < 0)
        {
            printf("There are no real roots");
        }
        else if(delta == 0)
        {
            *x1 = (-b + sqrt(delta)) / (2 * a);
            printf("There is one real root: x0 = %lf", *x1);
        }
        else
        {
            *x1 = (-b + sqrt(delta)) / (2 * a);
            *x2 = (-b - sqrt(delta)) / (2 * a);
            printf("There are 2  real roots: x1 = %lf, x2 = %lf", *x1, *x2);
        }
    }
}