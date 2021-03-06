//Kushnerov Mikhail B01 -107
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

bool is_simple(int n);

int main()
{
/*    int number = 0;
    scanf("%d", &number);
    printf("%s\n", (is_simple(number))? "Yes" : "No");  */

    for(int i = 0; i <= 1000000; i++)
        if(is_simple(i))
            printf("%d\t", i);

    return 0;
}

bool is_simple(int n)
{
    if(n == 1 || n == 2)
        return 1;

    if(n % 2 == 0)
        return 0;

    for(int i = 3; i <= (int)sqrt(abs(n)); i += 2)
    {
        if(n % i == 0)
            return 0;
    }
    return 1;
}
