//Kushnerov Mikhail B01 -107

#include <stdio.h>
#include <stdlib.h>

int fact(int n);

int main()
{
    printf("%d", fact (6));
    return 0;
}

int fact (int n)
{
    return (n <= 1)? 1 : n * fact (n - 1);
}
