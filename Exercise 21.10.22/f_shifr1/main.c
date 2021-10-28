//Kushnerov Mikhail B01-107

#include <stdio.h>
#include <stdlib.h>

void deCode(unsigned int codeNumber, char* l1, char* l2, char* l3, char* l4);

int main()
{
    char l1, l2, l3 ,l4;
    l1 = l2 = l3 = l4 = 0;

    unsigned int number = 0;

    scanf("%u", &number);

    deCode(number, &l1, &l2, &l3, &l4);

    printf("%c%c%c%c\n", l1, l2, l3, l4);

    return 0;
}

void deCode(unsigned int codeNumber, char* l1, char* l2, char* l3, char* l4)
{
    *l4 = (char)(codeNumber % 100) + 'A' - 1;
    codeNumber /= 100;
    *l3 = (char)(codeNumber % 100) + 'A' - 1;
    codeNumber /= 100;
    *l2 = (char)(codeNumber % 100) + 'A' - 1;
    codeNumber /= 100;
    *l1 = (char)(codeNumber % 100) + 'A' - 1;
}
