#include <stdio.h>
#include <stdlib.h>
#include "bigValues.c"

char* factorial(int);

int main()
{
    int value = 0;

    scanf("%i",&value);

    if(value > 0)
        printBigVal(factorial(value));
    else
        printf("I can calculate factorial only for positive numbers");
    return 0;
}

char* factorial(int value)
{
    char* factorial = init();
    iplus(factorial, 1);

    for(; value > 0; value --)
        imultiplicate(factorial, value);


    return factorial;
}
