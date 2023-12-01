// Write a programme to accept any integer number
//  and print table of the same integer.
#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++)
    {   
        printf("%d X %d = %d\n",n,i,i*n);
    }
    return 0;
}