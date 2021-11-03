//Kushnerov Mikhail B01-107

#include <stdio.h>
#include <stdlib.h>

#define N 10

void getArr (int* arr, int n);
int sumItems (int* arr, int k, int n);
int check (const int* a);


int main()
{
    int arr[N] = {};
    getArr (arr, N);

    int k = 0, n = 0;
    scanf ("%d%d", &k, &n);

    printf ("%d", sumItems (arr, k, n));
    return 0;
}

void getArr (int* arr, int n)
{
    for (int i = 0; i < n; i ++)
    {
        scanf ("%d", arr + i);
    }
}

int sumItems (int* arr, int k, int n)
{
    int sum = 0;
    for (int i = k; i < n; i ++)
        sum += arr[i];

    return sum;
}
