//Kushnerov Michail B01-107
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_a_number(char c);

int main()
{
    printf("Enter char:");

    printf("It %s a number", (is_a_number(getchar()))? "is" : "isn't");

    return 0;
}

bool is_a_number(char c)
{
    return (c >= '0') && (c <= '9');
}
