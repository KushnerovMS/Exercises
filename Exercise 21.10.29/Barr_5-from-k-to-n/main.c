//Kushnerov Mikhail B01-107

#include <stdio.h>
#include <stdlib.h>

#define N 10

void getArr (int* arr, int n);
void printArr (int* arr, int k, int n);

int main()
{
    int arr[N] = {};
    int k = 0, n = 0;
    getArr (arr, N);
    scanf ("%d%d", &k, &n);
    printArr (arr, k, n);
    return 0;
}

void getArr (int* arr, int n)
{
    for (int i = 0; i < n; i ++)
    {
        scanf ("%d", arr + i);
    }
}

void printArr (int* arr, int k, int n)
{
    do
    {
        printf ("%d ", arr[k++]);
    }
    while (k <= n);
    putchar ('\n');
}
