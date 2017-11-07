#include <cs50.h>
#include <math.h>
#include <stdio.h>

float change;
float quarter = 0.25;
float dimes;

int main(void)
{
    if (change - quarter > 0 ){
        printf(coins);
    }

    do
    {
        printf("How much change is owed?\n");
        change = get_float();
	}
    while (change < 0);

{