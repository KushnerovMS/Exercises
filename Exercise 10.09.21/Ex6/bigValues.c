#include <stdio.h>
#include <stdlib.h>

const char length = 100;

char * init()
{
    char * path = (char*)calloc(length, sizeof(char));
    for(int i = 0; i < length; i++)
        path[i] = 0;
    return path;
}

char* iplus(char* valp, int a)
{
    if(valp == 0)
        return 0;

    int helpVal = 0;

    for(int i = 0; a > 0; i++, a /= 100)
    {
        helpVal = valp[i] + a % 100;
        valp[i] = helpVal % 100;
        valp[i + 1] += helpVal / 100;
    }
    return valp;
}

char* imultiplicate(char* valp, int a)
{
    if(valp == 0)
        return 0;

    int helpVal = 0;

    int i = length - 1;

    for(; i >= 0 && valp[i] == 0; i--)
        ;

    for(; i >= 0; i--)
    {
        helpVal = valp[i]*a;
        valp[i] = 0;
        iplus(&valp[i], helpVal);
    }

    return valp;
}

int printBigVal(char* valp)
{
    if(valp == 0)
        return 0;

    int i = 0;

    for(; i < length && valp[length - i - 1] == 0; i++)
        ;

    printf("%i",valp[length - i - 1]);
    i++;

    for(; i < length; i++)
        printf("%02i",valp[length - i - 1]);
    return i;
}
