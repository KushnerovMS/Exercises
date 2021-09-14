#include <stdio.h>
#include <stdlib.h>

const int MULTIPLYCITY_NUMBER = 13;

int main()
{
    int a = 0;
    scanf("%i",&a);
    printf("%s\n",(!(a%MULTIPLYCITY_NUMBER))? "Yes":"No");
    return 0;
}
