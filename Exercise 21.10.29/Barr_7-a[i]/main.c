//Kushnerov Mikhail B01-107

#include <stdio.h>
#include <stdlib.h>

#define N 10

void getArr (int* arr, int n);
void printItems (int* arr, int n, int (*check)(const int*));
int check (const int* a);

int main()
{
    int arr[N] = {};
    getArr (arr, N);
    printItems (arr, N, check);
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

int check (const int* a)
{
    return *a >= 0;
}
