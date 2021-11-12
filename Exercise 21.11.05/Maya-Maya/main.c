#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c = 0;
    int number = 0;

    for (int digit = 0, mult = 1, deltaMult = 20, k = 0; (c = getchar ()) != EOF;)
    {
        switch (c)
        {
            case '*':
                k = 1;
                number += mult;
                //digit ++;
                break;
            case '-':
                number += 5 * mult;
                break;
            case '@':
                k = 0;

                mult *= deltaMult;
                deltaMult = (deltaMult == 20)? 18 : 20;
                break;
            case '\n':
                if (k)
                {
                    k = 0;

                    mult *= 20;
                    deltaMult = (deltaMult == 20)? 18 : 20;
                }
                break;
        }
    }

    /*
    for (int digit = 0, mult = 1, k = 1; k;)
    {
        k = 0;
        char buff[5];
        while (scanf ("%[-]", buff) == 1)
        {
            k = 1;
            digit += 5;
        }

        if (scanf ("%s", buff) == 1)
        {
            if (*buff != '@')
                digit += strlen (buff);

        }

        number += digit + mult;
        digit = 0;
        mult *= 20;
    } */

    printf ("%d", number);
    return 0;
}
