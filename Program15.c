#include<stdio.h>

char ToLowerX(char ch)
{
    if((ch>= 'A')&&(ch<='Z'))
    {
        return ch +32;

    }
    else
    {
        return ch;

    }
    
}

int main()
{
    char cvalue = '\0';
    char cRet= '\0';

    printf("enter the character\n");
    scanf("%c", &cvalue);

    cRet = ToLowerX(cvalue);

    printf("character in the lower case is : %c\n", cRet);

    return 0;
}