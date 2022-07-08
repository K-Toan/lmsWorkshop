#include<bits/stdc++.h>

double mean(double a[], int n)
{
	double m = 0;
	for(int i = 0; i < n; i++)
	{
		m += a[i];
	}
	return m / n;
}

double sumOfSquareValues(double a[], int n)
{
	double sum = 0;
	for(int i = 0; i < n; i++)
	{
		sum += a[i] * a[i];
	}
	return sum;
}

int main()
{
	double a[100];
	int n; scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%lf", &a[i]);
	}
	double  m = mean(a, n),
			s = sumOfSquareValues(a, n),
			d = (s / n) - m * m;
	printf("Statistics Calculator\n=====================");
	printf("\nThe number of data values read in was %d", n);
	printf("\nTheir statistical mean is %.2lf", m);
	printf("\nTheir standard deviation is %.2lf", sqrt(d));
}

