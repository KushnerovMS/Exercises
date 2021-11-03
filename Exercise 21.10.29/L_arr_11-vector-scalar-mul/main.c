//Kushnerov Mikhail B01-107

#include <stdio.h>
#include <stdlib.h>

void getArr (int* arr, int n);
void printArr (int* arr, int n);
void vectorAdd (int* arr1, int* arr2, int n);

int main()
{
    int N = 0;
    scanf ("%d", &N);

    int* v1 = (int*) calloc (N, sizeof (int));
    getArr (v1, N);

    int* v2 = (int*) calloc (N, sizeof (int));
    getArr (v2, N);

    vectorAdd (v1, v2, N);

    printArr (v1, N);

    free (v1);
    free (v2);

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
    putchar ('\n');
}

void vectorAdd (int* arr1, int* arr2, int n)
{
    for (int i = 0; i < n; i ++)
    {
        arr1[i] *= arr2[i];
    }
}
