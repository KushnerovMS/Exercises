//Kushnerov Mikhail B01-107

#include <stdio.h>
#include <stdlib.h>

unsigned int codeToNumber(char l1, char l2, char l3, char l4);

int main()
{
    char l1, l2, l3 ,l4;
    l1 = l2 = l3 = l4 = 0;
    scanf("%c%c%c%c", &l1, &l2, &l3, &l4 );

    printf("%08u\n", codeToNumber(l1, l2, l3, l4));
    return 0;
}

unsigned int codeToNumber(char l1, char l2, char l3, char l4)
{
    unsigned int a = l1 - 'A' + 1;
    a *= 100;
    a += l2 - 'A' + 1;
    a *= 100;
    a += l3 - 'A' + 1;
    a *= 100;
    a += l4 - 'A' + 1;
    return a;
}
