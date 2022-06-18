#include<stdio.h>

void financialCalc()
{
    float currentPrincipal, rate, year, futurePrincipal;
    scanf("%f%f%f%f", &currentPrincipal, &rate, &year, &futurePrincipal);
    printf("1. Test saving account\n");
    printf("principal = %.0f\n", currentPrincipal);
    printf("Annual rate = %.1f\n", rate);
    printf("No. of years = %.0f\n", year);
    printf("principal = %.2f\n", currentPrincipal);
    printf("amount after 2 years = %.2f\n\n", futurePrincipal);
    printf("2. Investment calculation\n");
    printf("future = %.0f\n", futurePrincipal);
    printf("Annual rate = %.1f\n", rate);
    printf("No. of years = %.0f\n", year);
    printf("principal should be = %.2f\n", currentPrincipal);
}

int main()
{
    financialCalc();
}