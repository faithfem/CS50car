#include<cs50.h>
#include<stdio.h>
#include<math.h>

int main(void)
{
//int coins = 0;
//int change = 0;

float change;

do
    {
        printf("O hai! How much change is owed?:\n");
        change = get_float();
    }
    while (change < 0);

   // CONVERT GIVEN AMOUNT TO CENTS
    int coins = 0;
    int cents = (int) round(change * 100);

    //QUARTERS
    //quarters_due = (cents_due / 0.25);
    coins += cents / 25;
    cents %= 25;

    //DIMES
    //dimes_due = (given_amount - quarters_due);
    coins += cents / 10;
    cents %= 10;

    //NICKELS
    //nickels_due =(given_amount - quarters_due - dimes_due);
    coins += cents / 5;
    cents %= 5;

    //CENTS
    //cents_due = (given_amount - quarters_due - dimes_due - nickels_due);
    coins += cents;


        printf("%d\n", coins);

}