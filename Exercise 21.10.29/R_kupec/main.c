//Kushnerov Mikhail B01-107

#include <stdio.h>
#include <stdlib.h>

void getArr (int* arr, int n);
int alignArr (int* arr, int n);

int main()
{
    int N = 0;
    scanf ("%d", &N);

    int* a = (int*) calloc (N, sizeof (int));
    getArr (a, N);

    printf ("%d ", alignArr (a, N));
    printf ("%d\n", a[0]);

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

int alignArr (int* arr, int n)
{
    int remainder = 0;
    for (int k = 1; k >= 1;)
    {
        k = 0;
        for (int i = 0; i < n; i ++)
        {
            int j = (i + 1) % n;
            if (arr[i] != arr[j])
            {
                int sum = arr[i] + arr[j];
                remainder += sum % 2;
                arr[i] = arr[j] = sum / 2;
                k = 1;
            }
        }
    }

    return remainder;
}
