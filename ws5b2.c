#include<stdio.h>

void stringReverse(char s[], int length)
{
    int index = 0;
    /*
    printf("The original string: ");
    while(index < length)
        printf("%c", s[index++]);
    printf("\nThe reverse string: ");
    */
    while(length >= 0)
        printf("%c", s[--length]);
}

int main()
{
    char s[200];
    int length = 0;
    //scanf("%[^\n]s", s);
    while(1)
    {
        char c = getchar();
        if((int)c == 10)
            break;
        s[length++] = c;
    }
    stringReverse(s, length);
}
