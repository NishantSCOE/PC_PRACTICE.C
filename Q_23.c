// Write a code to accept attendance of 5 subjects in
// percentage and decide whether the candidate is
// detained or not as per 75% attendance criteria.
#include <stdio.h>
int main()
{
    int sub1, sub2, sub3, sub4, sub5;
    printf("Enter 5 subjects attendance in percentage: ");
    scanf("%d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5);

    float attendance = (sub1 + sub2 + sub3 + sub4 + sub5) / 5;

    if (attendance < 75)
    {
        printf("Sorry! You have %.2f attendance.\nYou are detained.\n", attendance);
    }
    else
    {
        printf("You have %.2f attendance.\nYou are not detained.", attendance);
    }
    return 0;
}