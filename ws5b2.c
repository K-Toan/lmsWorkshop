#include<stdio.h>
#include<string.h>

void stringReverse(char s[], int length)
{
    int index = 0;
    printf("The original string: ");
    while(index < length)
        printf("%c", s[index++]);
    printf("\nThe reverse string: ");
    while(length >= 0)
        printf("%c", s[--length]);
}

int main()
{
    char s[200];
    scanf("%*c%[^\n]", s);
    stringReverse(s, strlen(s));
}