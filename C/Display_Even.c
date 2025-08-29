////////////////////////////////////////////////////////////////////////////////////////////////////
//Description: This program displays the digits which are even from a number .                    //
//================================================================================================//
//Language: C++                                                                                   //
//Compiler : GNU G++                                                                              //
//IDE: Visual Studio code                                                                         //
//================================================================================================//
//Author/Coder: Rajas Khambayate                                                                  //
//Date: 19th May 2025                                                                             //
//Day: Monday                                                                                     //
////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////
//Display_Even() Function: This function displays the digits which are even from a number .       //
//================================================================================================//
//Parameters:                                                                                     //
//1. int(iValue) : The value display the digits from .                                            //
//================================================================================================//
//Return: void                                                                                    //
//================================================================================================//
//Local variables:                                                                                //
//1. int(iDigit) : The variable to store the remainder of the original number after being divided //
////////////////////////////////////////////////////////////////////////////////////////////////////
void Display_Even(int iValue)
{
    if(iValue < 0)
    {
        iValue = -iValue;
    }

    int iDigit = 0;

    printf("Digits which are even from %d are : \n",iValue);
    while(iValue != 0)
    {
        iDigit = iValue % 10;

        if(((iDigit % 2) == 0) && (iDigit != 0))
        {
            printf("%d\n",iDigit);
        }

        iValue = iValue / 10;
    }
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
            printf("Please enter a integer : ");
            while(getchar() != '\n');
        }

        Display_Even(iNo);

        printf("Would you like to try Display_Even one more time? >Press for->YES:ANY_NUM OR NO:0 <=>Your Choice : ");
        while((!(scanf("%d",&iNo))) || (getchar() != '\n'))
        {
            printf("Please enter 0 or 1 : ");
            while(getchar() != '\n');
        }

        if(iNo == 0)
        {
            printf("====================================================================================================\n");
            printf("Thank you for using Rajas's Display_Even program .\n");
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