#include <stdio.h>

int main()
{
    int c = 0;
    int number = 0;

    for (int mult = 1, deltaMult = 20, k = 0; (c = getchar ()) != EOF;)
    {
        switch (c)
        {
            case '*':
                k = 1;
                number += mult;
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

    printf ("%d", number);
    return 0;
}
