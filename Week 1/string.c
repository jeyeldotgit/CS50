#include <cs50.h>
#include <stdio.h>

int main (void)
{
    char c = get_char("May chance ba si walter? ");
    if (c == 'y')
    {
        printf("congrats pre\n");
    }
    else if (c == 'n')
    {
        printf("shot puno na yan pre\n");
    }
}