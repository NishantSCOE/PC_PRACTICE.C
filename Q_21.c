/*Write a Program to print following pattern based on the
 number of rows.
e.g. Enter no. of rows : 6
0
01
012
0123
01234
012345*/
#include <stdio.h>
int main()
{
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (int i = 0; i <= rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
