#include <stdio.h>
#include <stdlib.h>

const int MAX_SIZE = 1000;

void getArray(int *arr, int length);
void sortArray(int *arr, int length);
void printarray(int *arr, int p, int c);

int main()
{
    int numCount = 0;
    int maxCount = 0;
    int numb[MAX_SIZE] = {};

    printf("Enter count of numbers: ");
    scanf("%d", &numCount);

    printf("Enter your numbers:\n");
    getArray(numb, numCount);

    printf("Enter count of max numbers: ");
    scanf("%d", &maxCount);

    sortArray(numb, numCount);

    printarray(numb, numCount - maxCount, maxCount);

    return 0;
}

void getArray(int *arr, int length)
{
    int *aend = arr + length;
    while(arr < aend)
        scanf("%d", arr++);
}

void sortArray(int *arr, int length)
{
    int iMin = 0;
    for(int i = 0; i < length - 1; i++)
    {
        iMin = i;

        for(int j = i + 1; j < length; j ++)
        {
            if(arr[j] < arr[iMin])
                iMin = j;
        }

        if(iMin != i)
        {
            int a = arr[iMin];
            arr[iMin] = arr[i];
            arr[i] = a;
        }
    }
}

void printarray(int *arr, int p, int c)
{
    arr += p;
    int *aend = arr + c;
    while(arr < aend)
        printf("%d ", *(arr++));
}
