#include<stdio.h>

char ToUpperX(char ch)
{
    if((ch>= 'a')&&(ch<='z'))
    {
        return ch - 32;

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

    cRet = ToUpperX(cvalue);

    printf("character in the upper case is : %c\n", cRet);

    return 0;
}