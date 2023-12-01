//Write a function to calculate the volume of a sphere.
// volume of sphere = 4/3*pi*r*r*r
#include <stdio.h>
int main()
{
    int radius;
    const double pi = 3.14159;
    printf("Enter radius of sphere: ");
    scanf("%d",&radius);

    float volume = 4/3*pi*(radius*radius*radius);

    printf("Volume of sphere: %.2f",volume);

    return 0;
}