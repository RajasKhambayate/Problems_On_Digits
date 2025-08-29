////////////////////////////////////////////////////////////////////////////////////////////////////
//Description: This program displays the digits within a number .                                 //
//================================================================================================//
//Language: C                                                                                     //
//Compiler : GNU GCC                                                                              //
//IDE: Visual Studio code                                                                         //
//================================================================================================//
//Author/Coder: Rajas Khambayate                                                                  //
//Date: 19th May 2025                                                                             //
//Day: Monday                                                                                     //
////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////
//Display_Digits() Function: This function displays the digits within a number .                  //
//================================================================================================//
//Parameters:                                                                                     //
//1. int(iValue) : The value display the digits from .                                            //
//================================================================================================//
//Return: void                                                                                    //
//================================================================================================//
//Local variables:                                                                                //
//1. int(iDigit) : The value to display the digits .                                              //
//2. int(iCnt)   : The variable to store the count of digits .                                    //
//3. int(iSum)   : The variable to store the summation of digits .                                //
////////////////////////////////////////////////////////////////////////////////////////////////////
void Display_Digits(int iValue)
{
    if(iValue < 0)
    {
        iValue = -iValue;
    }

    int iDigit = 0,iCnt = 0,iSum = 0;

    printf("Digits from %d are : \n",iValue);
    while(iValue != 0)
    {
        iDigit = iValue % 10;
        printf("%d\n",iDigit);
        iValue = iValue / 10;
        iCnt++;
        iSum = iSum + iDigit;//iSum += iDigit;
    }

    printf("Number of digits are : %d\n",iCnt);
    printf("Summation of digits are : %d\n",iSum);
}

//Starting point of the program
int main()
{
    int iNo = 0;

    while(1)
    {
        printf("Please enter a integer value : ");
        while((!(scanf("%d",&iNo))) || (getchar() != '\n'))
        {
            printf("Please enter a single integer : ");
            while(getchar() != '\n');
        }

        Display_Digits(iNo);

        printf("Would you like to try Display_Digits one more time? >Press for->YES:ANY_NUM OR NO:0 <=>Your Choice : ");
        while((!(scanf("%d",&iNo))) || (getchar() != '\n'))
        {
            printf("Please enter 0 or 1 : ");
            while(getchar() != '\n');
        }

        if(iNo == 0)
        {
            printf("====================================================================================================\n");
            printf("Thank you for using Rajas's Display_Digits program .\n");
            break;
        }
        else
        {
            printf("========================================================================================================================================================================================================\n");
            iNo = -1;
            continue;
        }
    }

    return 0;
}