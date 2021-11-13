#include <stdio.h>
#include <string.h>

#define N 1000

const char* getPattern (const char* str);
int isSymmetricStr (const char* str);

int main()
{
    char str[N] = {};
    scanf ("%s", str);
    //FILE* file;     ахаха
    const char* pattern = getPattern (str);

    if (pattern == 0)
    {
        printf ("NO");
        return 0;
    }

    int patternLen = isSymmetricStr (pattern);

    if (patternLen > 0)
        printf ("%s %d", pattern, patternLen);
    else
        printf ("NO");
    return 0;
}

const char* getPattern (const char* str)
{
    int patternLen = 1;
    int strLen = 0;
    for (; str[strLen] != '\0'; strLen ++)
    {
//        printf ("%d %d %d\n", strLen, patternLen, strLen % patternLen);
        if (str[strLen] != str[strLen % patternLen])
            patternLen ++;
    }

//    printf ("%d %d\n", strLen, patternLen);

    return (strLen % patternLen != 0)? 0 : str + strLen - patternLen;
}

int isSymmetricStr (const char* str)
{
    int len = strlen (str);
    const char* strEnd = str + len - 1;

    while (str < strEnd)
    {
        if (*(str ++) != *(strEnd --))
            return 0;
    }

    return len;
}
