#include <cs50.h>
#include <stdio.h>

int main (void)
{
    float owed = 0.0;
    //prompt the user to not type a negative value
    do
    {
        owed = get_float ("Change Owed: $");
    }
    while(owed < 0.00);

    // Converting amount from dollars (float) to cents (integer)
    int cents = (int)(owed * 100);

    // Calculate the number of quarters
    int quarters = cents / 25;
    int remainder = cents % 25;

    // Calculate the number of dimes
    cents = remainder;
    int dimes = cents / 10;
    remainder = cents % 10;

    // Calculate the number of nickels
    cents = remainder;
    int nickels = cents / 5;
    remainder = cents % 5;

    // Calculate the number of pennies
    cents = remainder;
    int pennies = cents / 1;
    remainder = cents % 1;

    int sum_coins = quarters + dimes + nickels + pennies;
    printf("Coins Needed: %i\n", sum_coins);


}