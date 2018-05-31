#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int counter = 0;
    int grade;
    float average = 0.0;

    printf("Enter a Grade, -1 to exit: ");
    scanf("%d", &grade);

    while(grade != -1)
    {
        average += grade;
        counter++;
        printf("Enter a Grade, -1 to exit: ");
        scanf("%d", &grade);
    }

    if(counter != 0)
    {
        average = (float) average / counter;
        printf("Average Grade: %.2f\n", average);
    }
    return 0;
}
