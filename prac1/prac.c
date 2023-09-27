#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
    srand(time(NULL));
    //prompt for user input (+ integer only)
    int x;
    do
    {
        x = get_int("Number of Coin Flips: ");
    }
    while (x < 0);

    int heads = 0;
    int tails = 0;
    int y = 0;


    int flip = rand() % 2;
    while (y != x)
    {
        flip = rand() % 2;
        if (flip == 1)
        {
            heads++;
        }
        else if (flip == 0)
        {
            tails++;
        }
        y++;
    }
    printf("Heads: %i Tails: %i\n", heads, tails);


}