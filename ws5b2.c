#include<stdio.h>

void stringReverse(char s[])
{
    int length = 0;
    while(s[length] != NULL)
        ++length;

    while(length >= 0)
        printf("%c", s[--length]);
}

int main()
{
    char s[200]; scanf("%[^\n]s", s);
    stringReverse(s);
}
