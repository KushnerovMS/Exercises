#include <stdio.h>

char *my_strcpy(char *dest, const char *src);

int main()
{
    char str[100] = {};
    char strCpy[100] = {};

    scanf ("%100s", str);

    my_strcpy(strCpy, str);

    printf("%s\n", strCpy);
    return 0;
}

char *my_strcpy(char *dest, const char *src)
{
    *dest = *src;
    for (size_t i = 0; src[i ++] != '\0';)
    {
        dest[i] = src[i];
    }
    return dest;
}
