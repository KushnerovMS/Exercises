#include <stdio.h>
#include <stdlib.h>

const int maxNumb = 100000;

int main()
{
    int number;
    number = 0;
    int snumb[maxNumb] = {2};

    scanf("%i", &number);

    for(int n = 2,i = 1; i < number; n++)
    {
        int check = 1;

        for(int j = 0; j < i; j++)
            if(n % snumb[j] == 0)
            {
                check = 0;
                break;
            }

        if(check)
            snumb[i++] = n;
    }

    printf("%i", snumb[number - 1]);

    return 0;
}
