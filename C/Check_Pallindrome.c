////////////////////////////////////////////////////////////////////////////////////////////////////
//Description: This program checks if the value is palindrome or not .                            //
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
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////////////////////////////
//Check_Palindrome() Function: This function returns true if number is palindrome .               //
//================================================================================================//
//Parameters:                                                                                     //
//1. int(iValue) : The value display the digits from .                                            //
//================================================================================================//
//Return: bool                                                                                    //
//================================================================================================//
//Local variables:                                                                                //
//1. int(iDigit)   : variable to store remainder of number when divide by 10 .                    //
//2. int(iReverse) : variable to store the reversed number .                                      //
//3. int(iTemp)    : variable to temporaily store the main number to compare it later .           //
////////////////////////////////////////////////////////////////////////////////////////////////////
bool Check_Palindrome(int iValue)
{
    int iDigit = 0,iReverse = 0,iTemp = 0;

    if(iValue < 0)
    {
        iValue = -iValue;
    }

    iTemp = iValue;

    while(iValue > 0)
    {
        iDigit = iValue % 10;
        iReverse = iReverse * 10 + iDigit;
        iValue = iValue / 10;
    }

    if(iReverse == iTemp)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//Starting point of the program
int main()
{
    int iNo = 0,iRet = 0;;

    while(1)
    {
        printf("Please enter an integer value: ");
        while((!(scanf("%d",&iNo))) || (getchar() != '\n'))
        {
            printf("Please enter a single whole number : ");
            while(getchar() != '\n');
        }

        bool bRet = Check_Palindrome(iNo);
        if(bRet == true)
        {
            printf("%d is a palindrome number .\n", iNo);
        }
        else
        {
            printf("%d is not a palindrome number .\n", iNo);
        }

        printf("Would you like to try Check_Palindrome one more time? >Press for->YES:ANY_NUM OR NO:0 <=>Your Choice : ");
        while((!(scanf("%d",&iNo))) || (getchar() != '\n'))
        {
            printf("Please enter 0 or 1 : ");
            while(getchar() != '\n');
        }

        if(iNo == 0)
        {
            printf("========================================================================================================================================================================================================\n");
            printf("Thank you for using Rajas's Check_Palindrome program .\n");

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