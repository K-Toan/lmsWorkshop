#include<stdio.h>

void eratosthenes(int lowerLimit, int upperLimit, int col)
{
    printf("Table of Primes\n");
    printf("===============\n");
    printf("Lower limit: %d\n", lowerLimit);
    printf("Upper limit: %d\n", upperLimit);
    printf("# of columns: %d\n", col);
    
    int isPrime[2000];
    isPrime[0] = false;
    isPrime[1] = false;
    
    for(int index = 2; index <= upperLimit; index++)
    {
        isPrime[index] = 1;
    }
    
    for(int index = 2; index <= upperLimit / 2; index++)
    {
        if(isPrime[index] == 1)
        {
            for(int mul = index * 2; mul <= upperLimit; mul += index)
            {
                isPrime[mul] = 0;
            }
        }
    }
    
    int count = 0;
    for(int index = lowerLimit; index <= upperLimit; index++)
    {
        if(isPrime[index] == 1)
        {
            printf("%6d", index);
            count++;
        }
        if(count == col)
        {
            count = 0;
            printf("\n");
        }
    }
}

int main()
{
    int lowerLimit, upperLimit, col; scanf("%d%d%d", &lowerLimit, &upperLimit, &col);
    eratosthenes(lowerLimit, upperLimit, col);
}