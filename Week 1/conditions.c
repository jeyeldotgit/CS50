#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int x = get_int("What's your score? ");
    if (x > 38)
    {
        printf("you have a passing score!!!\n");
    }
    else if (x < 38)
    {
        printf("aww, you almost nailed it\n");
    }
    else
    {
        printf("you hang on it\n");
    }
}