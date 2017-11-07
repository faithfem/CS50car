#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do //prompt the user
    {
        printf("Height:\n");
        height = get_int();                     // Asks user for input
    }
    while (height < 0 || height > 23);
    //build the pyramid
    //first build levels

    //THIS IS THE LEFT SIDE OF THE PYRAMID
//printf("  \t");
    for (int height_counter = 0; height_counter < height; height_counter ++) // Loop counts the height
    {
        int spaces = height - height_counter - 1;                                   // Loop creates spaces
        for (int spaces_counter = 0; spaces_counter < spaces; spaces_counter ++)
        {
            printf(" ");
        }
        for (int blocks_counter = 0 ; blocks_counter < height_counter + 2; blocks_counter ++)
        {
            printf("#");
        }
        printf("\n");
    }


//NEXT IS THE RIGHT SIDE OF THE PYRAMID

// for (int height_counter = 0; height_counter < height; height_counter++)
//         {
//         //to build the lines
//         int spaces = height - height_counter+0; //CHANGED HEIGHT CUONTER TO +0 INSTEAD OF +1
//             for (int spaces_counter = 0; spaces_counter > spaces; spaces_counter++)
//             {
//                 printf("%s", " ");
//                 //printf(" ");

//             }

//         for (int blocks_counter = 0; blocks_counter < height_counter; blocks_counter++)
//             {
//             printf("%s", "#");
//             }
//         //start a new line
//             printf("\n");

//         }



}


