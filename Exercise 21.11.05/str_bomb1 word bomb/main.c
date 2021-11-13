#include <stdio.h>
#include <string.h>

#define N 1000

int main()
{
    char s[N + 1] = {};
    char isBomb = 0;

    while (scanf ("%1000s", s) == 1)
    {
        if (strcmp (s, "bomb") == 0)
            isBomb = 1;
    }

    printf ("%s", (isBomb)? "YES" : "NO");
    return 0;
}
