#include<stdio.h>
#include<stdlib.h>
#include<time.h>      

int main()
{
    int tosses, heads, tails, temp, sel;
    while(1)
    {
        tosses = heads = tails = 0;
        printf("Select options: \n1. Start tossing\n0. Exit");
        printf("\nYour selection (0 -> 1): "); scanf("%d", &sel);
        if(sel == 0)
            break;
        else
        {    
            printf("Enter number of tosses: "); scanf("%d", &tosses);
            for(int i = 0; i < tosses; i++)
            {
                temp = rand() % 2;
                if(temp == 1)
                    tails++;
                else
                    heads++;
            }
            printf("Number of heads: %d", heads);
            printf("\nNumber of tails: %d", tails);
            printf("\nPercentage of heads for all tosses: %.2f\n", (float)heads / tosses);
        }
    }
}
