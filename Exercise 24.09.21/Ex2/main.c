//Kushnerov Mikhail B01 -107
#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b);

int main()
{
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);

    printf("%i", sum(a, b));

    return 0;
}

int sum(int a, int b)
{
    return a + b;
}
