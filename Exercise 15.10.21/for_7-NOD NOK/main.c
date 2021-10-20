//Kushnerov Mikhail B01 -107

#include <stdio.h>
#include <stdlib.h>

int NOD (int a, int b);
int NOK (int a, int b);

int main()
{
    int a = 0, b = 0;
    scanf ("%d %d", &a, &b);

    printf("%d %d\n", NOD (a, b), NOK (a, b));
    return 0;
}

int NOD (int a, int b)
{
    if (a > b)
        return NOD (a - b, b);
    if (a < b)
        return NOD (a, b - a);
    return a;
}

int NOK (int a, int b)
{
    return a * b / NOD (a, b);
}
