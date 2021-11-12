#include <stdio.h>
#include <stdlib.h>

const char* direction[5] = {"North",
                            "South",
                            "East" ,
                            "West" ,
                            "Treasure!"};


int main()
{
    char str[100] = {};
    int arg = 0;
    int x =0, y = 0;

    int dir = 0;
    do
    {
        scanf ("%s", str);

        if (strcmp (str, "Treasure!") != 0)
        {
            dir = 1;

            scanf ("%d", &arg);
            if (strcmp (str, "North") == 0)
                y += arg;
            else if (strcmp (str, "South") == 0)
                y -= arg;
            else if (strcmp (str, "East") == 0)
                x += arg;
            else if (strcmp (str, "West") == 0)
                x -= arg;
        }
        else
            dir = 0;
    }
    while (dir);
    printf("%d %d\n", x, y);
    return 0;
}
