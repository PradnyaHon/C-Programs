//sumation of no.
#include<stdio.h>
int Summation(int iValue)
{
    int iSum=0;
    int iCnt=0;
    for(iCnt=1; iCnt<=iValue; iCnt++)
    {
        iSum = iSum + iValue;
    }
    return iSum;
}
int main()
{
    int iRet=0;
    int iNo=0;

    printf("Enter the no: ");
    scanf("%d", &iNo);

    iRet = Summation(iNo);

    printf("Summation is : %d ", iRet);


    return 0;
}