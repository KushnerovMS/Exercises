#include <stdio.h>
#include <stdlib.h>

const int nCount = 3;

int getNumbs(int*, int);
void sortNumbs(int*, int);
int getNOK(int*, int);

int main()
{
    int numb[nCount];

    getNumbs(numb, nCount);

    sortNumbs(numb, nCount);

    printf("%i", getNOK(numb, nCount));

    return 0;
}

int getNumbs(int* numb, int length)
{
    int i = 0;

    for(int i = 0; i < length; i++)
        scanf("%i", numb + i);

    return i + 1;
}

void sortNumbs(int* numb, int length)
{
    for(int i = 0; i < length - 1; i++)
        for(int j = i + 1; j < length; j++)
            if(numb[j] > numb[i])
            {
                int a = numb[i];
                numb[i] = numb[j];
                numb[j] = a;
            }
}

int getNOK(int* numb, int length)
{
    int nok = numb[0];
    for(int i = 1; i < length; i++)
        for(int k = nok; nok % numb[i] != 0; nok +=k)
            ;
    return nok;
}
