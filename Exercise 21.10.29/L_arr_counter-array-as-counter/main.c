//Kushnerov Mikhail B01-107

#include <stdio.h>
#include <stdlib.h>

#define COLOR_COUNT 10

void getArr (int* arr, int n);
void countItems (int* arr, int n, int* colors);

int main()
{
    int N = 0;
    scanf ("%d", &N);

    int* a = (int*) calloc (N, sizeof (int));
    getArr (a, N);

    int color[COLOR_COUNT] = {};

    countItems (a, N, color);

    for (int i = 0; i < COLOR_COUNT; i ++)
    {
        printf ("%d %d\n", i, color[i]);
    }

    free (a);

    return 0;
}

void getArr (int* arr, int n)
{
    for (int i = 0; i < n; i ++)
    {
        scanf ("%d", arr + i);
    }
}

void countItems (int* arr, int n, int* color)
{
    for (int i = 0; i < n; i ++)
        color [arr[i]] ++;
}
