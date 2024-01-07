//Armstrong no
#include<stdio.h>
#include<stdbool.h>

int CheckArmstrong(int iNo)
{
    int iDigit=0;
    int Temp=iNo;
    int Arm=0;

    while(iNo!=0)
    {
        iDigit= iNo%10;
        Arm= Arm + iDigit * iDigit * iDigit;
        iNo= iNo/10;
    }

    return Arm==Temp;

}
int main()
{
    int iValue=0;
    bool bRet=false;

    printf("entr the no : ");
    scanf("%d",&iValue);

    bRet = CheckArmstrong(iValue);

    if(bRet==true)
    {
        printf("No is Armstrong: ");
    }
    else
    {
        printf("No is not Armstrong: ");
    }


    return 0;

}