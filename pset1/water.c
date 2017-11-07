#include <cs50.h>
#include <stdio.h>

int main(void) // Int is to initialize. Main means this is the main function to be run. Void means there is no input to the function
{
    int minutes;
    do
    {
        printf("Minutes:");
        minutes = get_int(); // Prompts the user to provide the minutes
    }
    while (minutes < 0); // While loop
    printf("Bottles: %i\n", minutes * 12); // Number of bottles produced in a certain number of minutes
}