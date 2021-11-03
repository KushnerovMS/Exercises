//Kushnerov Mikhail B01-107

#include <stdio.h>
#include <stdlib.h>

void getArr (int* arr, int n);
void printItems (int* arr, int n, int (*check)(const int*));
int evenCheck (const int* a);
int noevenCheck (const int* a);


int main()
{
    int N = 0;
    scanf ("%d", &N);

    int* arr = (int*) calloc (N, sizeof (int));
    getArr (arr, N);

    printItems (arr, N, evenCheck);
    printf ("\n");
    printItems (arr, N, noevenCheck);

    free (arr);

    return 0;
}

void getArr (int* arr, int n)
{
    for (int i = 0; i < n; i ++)
    {
        scanf ("%d", arr + i);
    }
}

void printItems (int* arr, int n, int (*check)(const int*))
{
    for (int i = 0; i < n; i ++)
    {
        if (check (arr + i))
            printf ("%d ", arr[i]);
    }
}

int noevenCheck (const int* a)
{
    return *a % 2;
}

int evenCheck (const int* a)
{
    return ! noevenCheck (a);
}
