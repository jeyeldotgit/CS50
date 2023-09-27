#include <stdio.h>
#include <cs50.h>

float average (int array[]);
const int marks = 5;
int main (void)
{
    int total_marks [marks];
    for (int i = 0; i < marks; i++)
    {
        do
        {
            total_marks [i] = get_int("Marks: ");
        }
        while(total_marks[i] < 0 || total_marks[i] > 100);
    }
    printf("Average: %.2f\n", average(total_marks));

    if(average (total_marks) >= 75)
    {
        printf("You got passing marks\n");
    }
    else if (average (total_marks) < 75)
    {
        printf("You got a failing scores\n");
    }
}

float average(int array[])
{
    int sum = 0;
    for (int i = 0; i < marks; i++)
    {
        sum += array[i];
    }
    return sum / (float) marks;
}
