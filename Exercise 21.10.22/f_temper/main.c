//Kushnerov Mikhail B01-107

#include <stdio.h>
#include <stdlib.h>

float temFC (int faren);

int main()
{
    int f = 0;
    scanf ("%d", &f);
    printf("%f", temFC (f));
    return 0;
}

float temFC (int faren)
{
    return (faren - 32) / 1.8;
}
