#include <stdio.h>
#include <cs50.h>

int main (void)
{
     char operator;
    int num1 = get_int ("X: ");
    do{
        operator = get_char ("Operation: ");
    }
    while (operator != '+' && operator != '-' && operator != '/' && operator != '*' );
    int num2 = get_int ("Y: ");
    int answer = 0;

    if (operator == '+')
    {
        answer = num1 + num2;
    }
    else if (operator == '-')
    {
        answer = num1 - num2;
    }
    else if (operator == '*')
    {
        answer = num1 * num2;
    }
    else if (operator == '/')
    {
        answer = num1 / num2;
    }

printf("Answer: %i\n", answer);
printf("Basic potangina");
return 0;
}