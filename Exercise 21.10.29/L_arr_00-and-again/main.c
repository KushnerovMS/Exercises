//Kushnerov Mikhail B01-107

#include <stdio.h>
#include <stdlib.h>

void getArr (int* arr, int n);
void printArr (int* arr, int n);

int main()
{
    int N = 0;
    scanf ("%d", &N);

    int* arr = (int*) calloc (N, sizeof (int));
    getArr (arr, N);

    printArr (arr, N);
    printArr (arr, N);

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

void printArr (int* arr, int n)
{
    for (int i = 0; i < n; i ++)
    {
        printf ("%d ", arr[i]);
    }
}
