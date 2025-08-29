////////////////////////////////////////////////////////////////////////////////////////////////////
//Description: This program reverses the digits of a number .                                     //
//================================================================================================//
//Language: C                                                                                     //
//Compiler : GNU GCC                                                                              //
//IDE: Visual Studio code                                                                         //
//================================================================================================//
//Author/Coder: Rajas Khambayate                                                                  //
//Date: 21th May 2025                                                                             //
//Day: Wednesday                                                                                  //
////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////
//Reverse_Number() Function: This function reverses the digit within a number .                   //
//================================================================================================//
//Parameters:                                                                                     //
//1. int(iValue) : The value display the digits from .                                            //
//================================================================================================//
//Return: int                                                                                     //
//================================================================================================//
//Local variables:                                                                                //
//1. int(iDigit)   : variable to store the remainder of the number .                              //
//2. int(iReverse) : variable to store reversed number .                                          //
////////////////////////////////////////////////////////////////////////////////////////////////////
int Reverse_Number(int iValue)
{
    int iDigit = 0,iReverse = 0;

    if(iValue < 0)
    {
        iValue = -iValue;
    }

    while(iValue > 0)
    {
        iDigit = iValue % 10;
        iReverse = iReverse * 10 + iDigit;
        iValue = iValue / 10;
    }

    return iReverse;
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
            printf("Please enter a valid integer : ");
            while(getchar() != '\n');
        }

        int iRet = Reverse_Number(iNo);
        printf("%d : is a reverse form of : %d\n", iRet, iNo);

        printf("Would you like to try Reverse_Number one more time? >Press for->YES:ANY_NUM OR NO:0 <=>Your Choice : ");
        while((!(scanf("%d",&iNo))) || (getchar() != '\n'))
        {
            printf("Please enter 0 or 1 : ");
            while(getchar() != '\n');
        }

        if(iNo == 0)
        {
            printf("====================================================================================================\n");
            printf("Thank you for using Rajas's Reverse_Number program .\n");
            break;
        }
        else
        {
            printf("====================================================================================================\n");
            iNo = -1;
            continue;
        }
    }

    return 0;
}