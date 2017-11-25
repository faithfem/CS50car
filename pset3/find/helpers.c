/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */

#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
    if (value < 0)
    {
        return false;
    }
        int smallest = 0, largest = n - 1; // Set smallest and largest numbers between 0 and n

        while (n > 0)
        {
            int middle = (largest - smallest)/2 + smallest;
            {
                if (values[middle] == value)
                {
                    return true;
                }
                 else if (values[middle] > value)
                {
                    largest = middle - 1;
                }
                    else if (values[middle] < value)
                {
                smallest = middle +1;
                }
            }
            n = largest - smallest + 1;
        }
        return false;
}


/**
 * Sorts array of n values.
 */
void sort(int values[], int n) //Selection sort
{
    // TODO: implement a sorting algorithm
        for (int i = 0; i < n-1; i++)
        {
            int smallest = i;
            for (int x = i+1; x < n; x++)
            {
                if (values[smallest] > values[x])
                    smallest = x;
            }
                //if (smallest != i);
                // {
                    int newSmallest = values[smallest];
                    values[smallest] = values[i];
                    values [i] = newSmallest;
                // }
            // }
            // return;
        }
}
