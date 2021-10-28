//Kushnerov Mikhail B01-107

#include <stdio.h>
#include <stdlib.h>

void printOddEvent(unsigned int number);

int main()
{
    unsigned int a = 0;
    scanf ("%u", &a);
    printOddEvent(a);
    return 0;
}

void printOddEvent(unsigned int number)
{
    number /= 2;

    unsigned int a[2] = {};
    for (int i = 0; number != 0; i ++, number /= 10)
        a[i % 2] += number % 10;

    printf ("%u %u", a[0], a[1]);
}
