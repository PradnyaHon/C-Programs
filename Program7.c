//no is pelindrome.
#include<stdio.h>
#include<stdbool.h>

int Pelindrom(int iNo)
{
    int iDigit=0, iRev=0;
    int Temp=iNo;

    while(iNo !=0)
    {
        iDigit = iNo% 10;
        iRev= (iRev * 10)+ iDigit;
        iNo = iNo/10;
    }
    return iRev==Temp;
}

int main()
{
    int iValue=0;
    int bRet=0;

    printf("Enter the no :");
    scanf("%d", &iValue);

    bRet = Pelindrom(iValue);
    
    if(bRet==true)
    {
        printf("No is Pelindrome");

    }
    else
    {
        printf("No is not Pelindrome");
    }
    
    return 0;

}
 