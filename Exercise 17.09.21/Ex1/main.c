#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[1000] = {};
    int ncount = 0;
    float average = 0;

    printf("Enter count of your numbers:");
    scanf("%d", &ncount);

    printf("Enter your numbers:\n");
    for(int i = 0; i < ncount; i++)
    {
        scanf("%d", &numbers[i]);
        average += numbers[i];
    }

    average /= ncount;

    printf("Numbers more than them average:\n");
    for(int i = 0; i < ncount; i++)
    {
        if(numbers[i] > average)
            printf("%d, ", numbers[i]);
    }
    printf("\b\b.");

    return 0;
}
