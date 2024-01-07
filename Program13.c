#include<stdio.h>   

void Display(int iNo)
{
    int i = 0, j = 0;

    int iLength= 2*iNo-1;
    
    for(i = 1; i<= iLength; i++)
    {
        for(j = 1; j<=iLength; j++)
        {
                                                                                             
            //if((i == 1) || (i == iNo) || (j == 1) || (j == iNo) )
            //{
               // printf("1\t");
            //}
            
            /*else if((i==2) || (i==iRow-1) || (j==2) || (j== iCol-1))
            {
                printf("2\t");
            }
            else if((i==3) || (i==iRow-2) || (j==3) || (j== iCol-2))
            {
                printf("3\t");
            }
            else if((i==4) || (i==iRow-3) || (j==4) || (j== iCol-3))
            {
                printf("4\t");
            }*/
            //else
            //{
             //  printf(" \t");
            //}
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;

    printf("Enter number of rows\n");
    scanf("%d",&iValue1);

    
    Display(iValue1);

    return 0;
}