#include <stdio.h>
#include <stdlib.h>

#define N 1000

char* getPattern (const char* str);

int main()
{
    char str[N] = {};
    scanf ("%s", str);

    printf("%S", getPattern (str));
    return 0;
}

char* getPattern (const char* str)
{
    int patternLen = 1;
    int i = 0;
    for (; str[i] != '\0'; i ++)
    {
        if (str[i] != str[i % patternLen])
            patternLen = i + 1;
    }

  //  printf ("%d", patternLen);

    return str + i - patternLen;
}
