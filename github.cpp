#include<stdio.h>

int main()
{
    int num[40], i;

    // Initialize the array and print the values
    for (i = 0; i < 40; i++)
    {
        num[i] = i;
        printf("%d ", num[i]);  // Print each number
    }

    return 0;   // Good practice to return 0 in main
}

