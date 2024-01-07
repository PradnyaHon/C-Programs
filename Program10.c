//Min digit from no
#include<stdio.h>
#include<stdbool.h>

int Min(int iNo)
{
    int iMin=9;
    int iDigit =0;


    if(iNo<0)
    {
        iNo= - iNo;
    }
    while(iNo!=0)
    {
        iDigit = iNo%10;

        if(iDigit<iMin)
        {
            iMin=iDigit;
        }
    
        iNo=iNo/10;
    }
    return iMin;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the no: ");
    scanf("%d",&iValue);

    iRet= Min(iValue);

    printf("Smaller no is : %d",iRet);

    return 0;

}