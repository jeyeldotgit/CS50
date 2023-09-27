#include <cs50.h>
#include <stdio.h>

bool prime(int number);

int main(void)
{
    // do while loop
    // getting the minimum
    int min;
    do
    {
        min = get_int("Minimum: ");
    }
    while (min < 1);

    // getting the maximum
    int max;
    do
    {
        max = get_int("Maximum: ");
    }
    while (min >= max);

    // nested loop
    for (int i = min; i <= max; i++)
    {
        if (prime(i))
        {
            printf("%i\n", i);
        }
    }
}

bool prime(int number)
{
    // TODO
    // check if the number is prime
    if (number < 2)
    {
        return false;
    }
    for(int i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
        return false;
    }

        return true;
}
