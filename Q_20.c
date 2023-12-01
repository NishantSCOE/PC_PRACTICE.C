// Write a programme to accept birth year of person
// and print output as a eligibility for voting in the year 2024.
#include <stdio.h>
int main()
{
    int birthYear;
    printf("Enter your birth year: ");
    scanf("%d", &birthYear);

    if (2024 - birthYear >= 18)
    {
        printf("Congratulations! You are eligible for voting.");
    }
    else
    {
        printf("Sorry! You are not eligible.");
    }
    return 0;
}