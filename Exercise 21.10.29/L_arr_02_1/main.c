//Kushnerov Mikhail B01-107

#include <stdio.h>
#include <stdlib.h>

void getArr (int* arr, int n);
int findItemNumb (int item, int* arr, int n);

int main()
{
    int N = 0;
    scanf ("%d", &N);

    int* a = (int*) calloc (N, sizeof (int));
    getArr (a, N);

    int item = 0;
    scanf ("%d", &item);

    printf ("%d", findItemNumb (item, a, N));

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

int findItemNumb (int item, int* arr, int n)
{
    for (int i = 0; i < n; i ++)
    {
        if (arr[i] == item)
            return i;
    }
    return -1;
}
