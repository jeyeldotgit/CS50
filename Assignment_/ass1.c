#include <stdio.h>
#include <cs50.h>

int main (void)
{
    char conversion;
    do
    {
        conversion = get_char("Type of Conversion: ");
    }
    while (conversion != 'a' && conversion != 'b');
        // a = celcius to fahrenheit
        //b = fahrenheit to celcius
    //Ask the user for the temperature to convert.
    int temp;
    do
    {
        temp = get_int("Temperature to convert: ");
    }
    while (temp >= 128 || temp <= -128);

    //Perform the conversion.

    //Assigning formula
    float f = (temp * 9.0/5) + 32;
    float c = (temp - 32) * 5.0/9;
    float answer;
    if (conversion == 'a')
    {
        printf("Answer: %.2f Fahrenheit\n", f);
    }
    else if (conversion == 'b')
    {
        printf("Answer: %.2f Celcius\n", c);
    }
}