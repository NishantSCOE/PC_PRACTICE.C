// Write a program to print all odd numbers from
//  1 to 100 using a while loop.
#include <stdio.h>
int main()
{
    int i = 1;
    while (i <= 100)
    {
        printf("%d\n", i);
        i += 2;
    }
    return 0;
}