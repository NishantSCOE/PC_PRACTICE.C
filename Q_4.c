// Write a program to print all even numbers from 1 to 100.
#include <stdio.h>
int main()
{
    for (int i = 2; i <= 100; i = i + 2)
    {
        printf("%d\n", i);
    }
    return 0;
}