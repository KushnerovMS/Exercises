#include <stdio.h>
#include <stdlib.h>

#define N 1000

int main()
{
    char s[N + 1] = {};
    char isBomb = 0;

    while (scanf ("%1000s", s) == 1)
    {
        if (strstr (s, "bomb") != NULL)
            isBomb = 1;
    }

    printf ("%s", (isBomb)? "YES" : "NO");
    return 0;
}
