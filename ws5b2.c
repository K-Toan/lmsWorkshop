#include<stdio.h>

void stringReverse(char s[], int length)
{
    while(length >= 0)
        printf("%c", s[--length]);
}

int main()
{
    char s[200];
    int length = 0;
    while(1)
    {
        char c = getchar();
        if((int)c == 10)
            break;
        s[length++] = c;
    }
    stringReverse(s, length);
}