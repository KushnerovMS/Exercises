//Kushnerov Mikhail B01 -107

#include <stdio.h>
#include <stdlib.h>

int rusMult (int a, int b);

int main()
{
    int a = 0, b = 0;
    scanf ("%d %d", &a, &b);

    printf("%d\n", rusMult (a, b));
    return 0;
}

int rusMult (int a, int b)
{
    printf ("%d %d\n", a, b);

    if (a < b)
        return rusMult (b, a);

    if (b <= 1)
    {
        printf ("%d\n", a);
        return a;
    }

    int remain = b % 2;

    int res = rusMult (a * 2, b / 2);

    printf ("%d %d %d ", res, a, remain);


    if (remain == 1)
        res += a;

    printf ("%d\n", res);

    return res;
}
