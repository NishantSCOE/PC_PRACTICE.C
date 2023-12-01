// Write a program to print all odd numbers from
//  1 to 100 using a do while loop.
#include <stdio.h>
int main()
{
    int i = 1;
    do
    {
        printf("%d\n", i);
        i += 2;
    } while (i <= 100);

    return 0;
}