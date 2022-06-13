//workshop1.1
#include<stdio.h>
#include<math.h>

int main()
{
    double a, b, c, x;
    printf("Enter a = "); scanf("%lf", &a);
    printf("Enter b = "); scanf("%lf", &b);
    printf("Enter c = "); scanf("%lf", &c);
    printf("Enter x = "); scanf("%lf", &x);
    printf("S1 = %.2lf", (a * x * x + b * x + c));
    double temp = b * b - 4 * a * c;
    printf(", ");
    if(temp > 0)
        printf("S2 = %.2lf", sqrt(temp));
    else
        printf("S2 = 0.00");
}


//workshop1.2
#include<stdio.h>
#include<math.h>

int main()
{
    double a, b, c;
    printf("Enter a, b, c = ");
    scanf("%lf%lf%lf", &a, &b, &c);
    if(a + b <= c || b + c <= a || c + a <= b)
    {
        printf("a, b, c are not sides of a triangle.");
    }
    else
    {
        double p = (a + b + c) / 2;
        double s = sqrt(p * (p - a) * (p - b) * (p - c));
        printf("Perimeter = %.4lf\nArea = %.4lf", p * 2, s);
    }
}


//workshop1.3 
#include<stdio.h>

int main()
{
    double a[3]; printf("Enter a, b, c = ");
    scanf("%lf%lf%lf", &a[0], &a[1], &a[2]);
    for(int i = 0; i < 3; i++)
        for(int j = i + 1; j < 3; j++)
            if(a[i] > a[j])
            {
                double temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
    printf("%.2lf %.2lf\n%.2lf %.2lf %.2lf", a[0], a[2], a[0], a[1], a[2]);
}

//workshop2.1 10/10
#include<stdio.h>
#include<math.h>

int main()
{
    int n, s1 = 0, s2 = 1;
    double s3 = 0;
    
    //getting input value
    while(1)
    {
        printf("Enter n = "); scanf("%d", &n);
        if(n <= 5)
            printf("n must be > 5, please reenter!\n");
        else
            break;
    }
    
    //calculating s1, s2, s3
    for(double i = 1; i <= n; i++)
    {
        s1 += i;
        s2 *= i;
        s3 += 1 / i;
    }
    
    //printing s
    printf("s1 = %d\ns2 = %d\ns3 = %.4lf", s1, s2, s3);
    
    //checking prime number
    int k = 0;
    printf("\nEnter n = "); scanf("%d", &n);
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            k++;
            break;
        }
    }
    if(k == 0)
        printf("%d is a prime number", n);
    else
        printf("%d is not a prime number", n);
}

//workshop2.2 cách này củ chuối chưa test, không khuyến khích làm kiểu này nhé thầy nhìn thầy biết ai làm đấy =)))
//cách khác dễ hơn làm workshop2.2: 
//i chạy từ 2 đến m hoặc n, nếu cả m và n chia hết i thì đặt gcd bằng i
//lcm = (m / gcd) * (n / gcd) * gcd
#include<stdio.h>

int greatestCommonDivide(int m, int n)
{
    if(m == n)
        return m;
    int t;
    if(m > n)
    {
        t = m;
        m = n;
        n = t;
    }
    while(m != 0)
    {
        t = m;
        m = n % m;
        n = t;
    }
    return n;
}

int main()
{
    int m, n, gcd;
    printf("Enter m, n = "); scanf("%d%d", &m, &n);
    gcd = greatestCommonDivide(m, n);
    printf("GCD = %d\nLCM = %d", gcd, (m / gcd) * (n / gcd) * gcd);
}


//workshop3.1
#include<stdio.h>

int reverseNumber(int n)
{
    int res = 0;
    while(n > 0)
    {
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res;
}

int binaryNumber(int n)
{
    int bin = 0, count = 1;
    while(n > 0)
    {
        bin = bin + (n % 2) * count;
        count *= 10;
        n /= 2;
    }
    /*
    for(; n > 0; n /= 2)
    {
        b = b + (n % 2) * count;
        count *= 10;
    }
    */
    return bin;
}

int sumOfAllDigits(int n)
{
    int sum = 0;
    while(n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    int n;
    printf("Enter n = "); scanf("%d", &n);
    printf("%d in binary number format is: %d", n, binaryNumber(n));
    
    printf("\n\nEnter n = "); scanf("%d", &n);
    printf("The sum of all digits in 12345 is %d", sumOfAllDigits(n));
    
    printf("\n\nThe reverse number of  %d is %d", n, reverseNumber(n));
}


//workshop3.2 chưa test
#include<stdio.h>
#include<math.h>

int main()
{
    double a, b, c;
    printf("Enter a, b, c = "); scanf("%lf%lf%lf", &a, &b, &c);
    if(a == 0)
    {
        printf("x1 = x2 = %.2lf", - c / b);
    }
    else
    {
        double delta = b * b - 4 * a * c;
        if(delta == 0)
        {
            printf("x1 = x2 = %.2lf", (- b) / (2 * a));
        }
        else if(delta > 0)
        {
            printf("x1 = %.2lf, x2 = %.2lf", (- b - sqrt(delta)) / (2 * a), (- b + sqrt(delta)) / (2 * a));
        }
        else
        {
            printf("no real solution");
        }
    }
}

//workshop3.3
#include<stdio.h>

int reverseNumber(int n)
{
    int rev = 0;
    while(n > 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

int main()
{
    int m, n;
    printf("Enter m, n = "); scanf("%d%d", &m, &n);
    for(int i = m; i <= n; i++)
    {
        if(i == reverseNumber(i))
        {
            printf("%d ", i);
        }
    }
}

//workshop4.1
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
        temp *= (float) (x / count);
    }
    return sum;
}

int main()
{
    int n = 1000;
    double x = 1.5, epsi = 0.00001;
    printf(" exp(%.1lf) = %lf\n", x, exp(x));
    printf(" exp(%.1lf, %d) = %6lf\n", x, n, myExp(x, n));
    printf(" exp(%.1lf, %f) = %6lf\n", x, epsi, myExp(x, n));
}

//workshop4.2
#include<stdio.h>
#include<math.h>

double myPi(double epsi)
{
    double sum = 0, index = 0, temp = 1, i = -1;
    while(temp >= epsi)
    {
        i *= -1;
        temp = 1 / (2 * index + 1);
        sum += temp * i;
        index++;
    }
    return 4 * sum;
}

double mySin(double x, double epsi)
{
    double sum = x, factor = 1, fracture = x, counter = 1;
    while(fracture >= epsi || fracture <= -epsi)
    {
        counter += 2;
        fracture *= (-x * x) / (counter * (counter - 1));
        sum += fracture;
    }
    return sum;
}

double myCos(double x, double epsi)
{
    double sum = 1, factor = 1, fracture = 1, counter = 0;
    while(fracture >= epsi || fracture <= -epsi)
    {
        counter += 2;
        fracture *= - (x * x) / (counter * (counter - 1));
        sum += fracture;
    }
    return sum;
}


int main()
{
    double epsi = 0.001, PI = myPi(epsi); //scanf("%lf", &epsi);
    printf("PI = %lf", PI);

    scanf("%lf%lf", &x, &epsi);
    printf("\nsin(PI/2) = %lf", mySin(x, epsi));
    scanf("%lf%lf", &x, &epsi);
    printf("\ncos(PI) = %lf", myCos(x, epsi));
}

//workshop4B-1
#include<stdio.h>

void input(int *num, int *den);
void simplify(int *num, int *den);
void display(int num, int den);

int main()
{
    int numerator, denominator;
    input(&numerator, &denominator);
}

void input(int *num, int *den)
{
    bool flag = true;
    int numerator, denominator = 0;
    printf("1. Input fraction\n\n");
    printf("Enter numerator: ");
    scanf("%d", &numerator);
    while(!denominator)
    {
        printf("Enter denominator: ");
        scanf("%d", &denominator);
    }
    simplify(&numerator, &denominator);
}

void simplify(int *num, int *den)
{
    int a = *num;
    int b = *den;

    while (a != b && a > 0 && b > 0)
    {
        if (a > b)
            a -= b;
        if (b > a)
            b -= a;
    }
    printf("2. Simplify fraction\n");
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
    printf("Another run <y/n>? ");
    fflush(stdin); char res;
    scanf("%c", &res);
    if (res == 110)
        return;
    if (res == 121)
    {
        int numerator, denominator;
        input(&numerator, &denominator);
    }
}




