/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */

#include <cs50.h>
#include <stdio.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
   {
  int start = 0;
  int end = n - 1; // important (start counting from 0)
  int mid = (start + end) / 2;

  while (start <= end)
 {
    if (mid == value)
      return true;
    else if (value < mid)
        {
          end = mid - 1;
          mid = (start + end) / 2;
          // TODO
        }
    else if (value > mid)
        {
          start = mid + 1;
          mid = (start + end) / 2;
          // TODO
        }
      else
        break;
  }
  return false;
}
}


/*
 * void
 * sort(int values[], int n)
 *
 * Sorts array of n values.
 */

/**
 * Sorts array of n values.
 */

void sort(int values[], int n)
{
    // THE FIRST ELEMENT IS THE SMALLEST
    for (int i = 0; i < n; i++)
    {
        int smallest = i;
        for (int j = i+1; j < n; j++)
        {
            if (values[j] < values[smallest])
                lowest = j;
        }
        // Swap the smallest element with the first element of the unsorted array.
        int temp = values[i];
        values[i] = values[smallest];
        values[lowest] = temp;
    }
    return;
}

