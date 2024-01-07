#include<stdio.h>

void Display(int iValue)
{
    int iCnt;

    for(iCnt=1; iCnt<=iValue;iCnt++)
    {
        printf("Pradnya\n");
    }
}
int main()
{
    int iNo=0;

    printf("Enter no of iterations: ");
    scanf("%d", &iNo);

    Display(iNo);

    return 0;
}