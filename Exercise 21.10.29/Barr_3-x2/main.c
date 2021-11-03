//Kushnerov Mikhail B01-107

#include <stdio.h>
#include <stdlib.h>

#define N 10

void getArr (int* arr, int n);
void printArr (int* arr, int n);
void xArr (int k, int* arr, int n);

int main()
{
    int a[N] = {};
    getArr (a, N);
    xArr (2, a, N);
    printArr (a, N);
    return 0;
}

void getArr (int* arr, int n)
{
    for (int i = 0; i < n; i ++)
    {
        scanf ("%d", arr + i);
    }
}

void xArr (int k, int* arr, int n)
{
    while (n -- > 0)
    {
        arr[n] *= k;
    }
}

void printArr (int* arr, int n)
{
    for (int i = 0; i < n; i ++)
    {
        printf ("%d ", arr[i]);
    }
    putchar ('\n');
}
