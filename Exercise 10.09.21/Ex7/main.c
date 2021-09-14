#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;

    scanf("%i",&n);

    for(int i = 1; i <= n; i++)
        if(n % i == 0)
            printf("%i ",i);

    return 0;
}
