//Kushnerov Mikhail B01 -107
#include <stdio.h>
#include <stdlib.h>

unsigned int sum_of_numbers(unsigned int n);

int main()
{
    unsigned int numb = 0;
    scanf("%u", &numb);
    printf("Sum of numbs: %u", sum_of_numbers(numb));
    return 0;
}

unsigned int sum_of_numbers(unsigned int n)
{
    int sum = 0;
    while(n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
