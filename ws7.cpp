#include<bits/stdc++.h>

int checkValid(char s[])
{
	for(int i = 0; i < strlen(s); i++)
	{
		if(s[i] < 32 || (s[i] > 32 && s[i] < 65) || (s[i] > 90 && s[i] < 97) || (s[i] > 122))
			return 0;
	}
}

void stringTrim(char s[])
{
	int index = 0;
	char S[256];
	for(int i = 0; i < strlen(s); i++)
	{
		if(s[i] == ' ' && s[i + 1] == ' ') 
		{
			continue;
		}
		else
		{
			S[index] = s[i];
			index++;			
		}
	}
	for(int i = 0; i < index; i ++)
	{
		s[i] = S[i];
	}
	for(int i = strlen(s); i >= index; i--)
	{
		s[i] = '\0';
	}
}

void wordSplit(char s[])
{
    int count = 1;
    for(int i = 0; i < strlen(s); i++)
    {
        if(s[i] == ' ')
            count++;
    }
    printf("%d\n", count);
	for(int i = 0; i < strlen(s); i++)
	{
		if(s[i] == ' ')
			printf("\n");
		else if (s[i] < 32 || (s[i] > 32 && s[i] < 65) || (s[i] > 90 && s[i] < 97) || (s[i] > 122))
			continue;
		else if(s[i] == '\n')
			break;
		else
			printf("%c", s[i]);
	}
}

void wordToUpper(char s[])
{
	for(int i = 1; i < strlen(s); i++)
	{
		if(s[i - 1] == ' ' && s[i] > 9 && s[i] < 123)
		{
			s[i] -= 32;
		}
	}
}

int main()
{
	char s[256];
	int c; scanf("%d", &c);
	switch(c)
	{
		case 1:
    		scanf("%*c%[^\n]", s);
			printf("%s", s);
			break;
		case 2:
    		scanf("%*c%[^\n]", s);
    		stringTrim(s);	
    		wordSplit(s);
			break;
		case 3:
    		scanf("%*c%[^\n]", s);
    		stringTrim(s);
			wordToUpper(s);    		
			printf("%s", s);
			break;
		case 4:
    		scanf("%*c%[^\n]", s);
    		stringTrim(s);
    		printf("%s", s);
    		break;
		case 5:
    		scanf("%*c%[^\n]", s);
    		if(checkValid(s))
    			printf("valid name");
    		else
    			printf("invalid name");
			break;

	}
}
 
