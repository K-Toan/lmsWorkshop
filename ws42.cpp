#include<stdio.h>
#include<math.h>

double myPi(double epsi)
{
    double sum = 0, index = 0, fracture = 1, k = -1;
    while(fracture >= epsi)
    {
        k *= -1;
        fracture = 1 / (2 * index + 1);
        sum += fracture * k;
        index++;
    }
    return 4 * sum;
}

double mySin(double x, double epsi)
{
    double sum = x, factor = 1, fracture = x, index = 1;
    while(fracture >= epsi || fracture <= -epsi)
    {
        index += 2;
        fracture *= -(x * x) / (index * (index - 1));
        sum += fracture;
    }
    return sum;
}

double myCos(double x, double epsi)
{
    double sum = 1, factor = 1, fracture = 1, index = 0;
    while(fracture >= epsi || fracture <= -epsi)
    {
        index += 2;
        fracture *= - (x * x) / (index * (index - 1));
        sum += fracture;
    }
    return sum;
}

int main()
{
    double epsi; scanf("%lf", &epsi);
    double PI = myPi(epsi);
    printf("PI = %lf", PI);
    printf("\nsin(PI/2) = %lf", mySin(1.57, epsi));
    printf("\ncos(PI) = %lf", myCos(3.14, epsi));
}