#include <stdio.h>
#include <stdlib.h>

const int N = 1000;

int main()
{
    char* s1 = (char*) calloc (N + 1, sizeof (char));
    char* s2 = (char*) calloc (N + 1, sizeof (char));
    char maxLen = 0;

    while (scanf ("%1000s", s1) == 1)
    {
        int len = strlen (s1);
        if (len > maxLen)
        {
            maxLen = len;
            char* s = s1;
            s1 = s2;
            s2 = s;
        }
    }

    printf("%s %d", s2, maxLen);

    free (s1);
    free (s2);
    return 0;
}
