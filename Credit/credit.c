#include <cs50.h>
#include <stdio.h>

int main (void)
{
    //prompt user input
    long credit_card;
    credit_card = get_long("Credit Card Number: ");
        //card length:


    // luhn's algo
    int sum = 0;
    int i = 0;
    int digit = 0;

    while(credit_card != 0);
    {
        credit_card % 10;

        if (i % 2 == 0)
        {
            i * 2;
            if (credit_card > 9)
            {
                sum += credit_card % 10;
                sum += credit_card / 10;
            }
        }
        sum += credit_card;
        credit_card /= 10;
        i++;
    }
    if (sum == 0)
    {
        printf("Card is Valid\n");
    }
    else
    {
        printf("Card Invalid\n");
    }

}