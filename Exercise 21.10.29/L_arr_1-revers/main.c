//Kushnerov Mikhail B01-107

#include <stdio.h>
#include <stdlib.h>


void getArr (int* arr, int n);
void printArr (int* arr, int n);
void reverseArr (int* arr, int n);

int main()
{
    int N = 0;
    scanf ("%d", &N);

    int* a = (int*) calloc (N, sizeof (int));
    getArr (a, N);

    reverseArr (a, N);

    printArr (a, N);

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

void reverseArr (int* arr, int n)
{
    int* end = arr + n - 1;
    while (arr < end)
    {
        int a = *end;
        *(end --) = *arr;
        *(arr ++) = a;
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
