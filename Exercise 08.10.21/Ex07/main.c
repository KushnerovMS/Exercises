//Kushnerov Mikhail B01 -107
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0;
    scanf ("%d", &a);
    printf("%s\n", ((a % 4 == 0 && a % 25 != 0) || (a % 400 == 0))? "YES" : "NO");
    return 0;
}
