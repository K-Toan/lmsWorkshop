#include<stdio.h>
int main(){
    int l, r, c, i, j, isPrime, count = 0; scanf("%d%d%d", &l, &r, &c);
    for(i = (l > 2) ? l : 2; i <= r; i++){
        isPrime = 0;
        for(j = 2; j <= i / 2; j++)
            if(i % j == 0)
                isPrime = 1;
        if(isPrime == 0)
            printf("%5d", i, count++);
        if(count == c)
            printf("\n", count = 0);
    }
}
