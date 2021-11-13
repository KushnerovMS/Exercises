#include <stdio.h>
#include <string.h>

#define N 1000

char * strToLower (char * s);

int main()
{
    char s[N + 1] = {};
    char isBomb = 0;

    while (scanf ("%1000s", s) == 1)
    {
        strToLower (s);

        if (strstr (s, "bomb") != NULL)
            isBomb = 1;
    }

    printf ("%s", (isBomb)? "YES" : "NO");
    return 0;
}

char * strToLower (char* s)
{
    char* strPtr = s;

    while (*strPtr != '\0')
    {
        *strPtr = tolower (*strPtr);
        strPtr ++;
    }
    return s;
}
