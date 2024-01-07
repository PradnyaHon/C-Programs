//Max digit from no
#include<stdio.h>
#include<stdbool.h>

int Max(int iNo)
{
    int iMax=0;
    int iDigit =0;


    if(iNo<0)
    {
        iNo= - iNo;
    }
    while(iNo!=0)
    {
        iDigit = iNo%10;

        if(iDigit>iMax)
        {
            iMax=iDigit;
        }
    
        iNo=iNo/10;
    }
    return iMax;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the no: ");
    scanf("%d",&iValue);

    iRet= Max(iValue);

    printf("Greater no is : %d",iRet);

    return 0;

}