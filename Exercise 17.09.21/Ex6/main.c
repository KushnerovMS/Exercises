#include <stdio.h>
#include <stdlib.h>

const int MAX_SIZE = 1000;

void getArray(int *arr, int length);
void sortArray(int *arr, int length);
void copyArray(int *newArr, int *arr, int length);

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

    int sortNumb[MAX_SIZE] = {};

    copyArray(sortNumb, numb, numCount);

    sortArray(sortNumb, numCount);

    int bound = sortNumb[numCount - maxCount];
    int minCount = 0;
    for(int i = numCount - maxCount; i < numCount && sortNumb[i] == bound; i++)
        minCount ++;

    for(int i = 0; i < numCount; i ++)
    {
        if(numb[i] >= bound && (numb[i] != bound || minCount-- > 0))
            printf("%d ", numb[i]);
    }

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

void copyArray(int *newArr, int *arr, int length)
{
    int *arrEnd = arr + length;
    while(arr < arrEnd)
        *(newArr++) = *(arr++);
}
