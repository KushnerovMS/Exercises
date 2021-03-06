#include <stdio.h>
#include <stdlib.h>

const int MAX_SIZE = 1000;

void getArray(int *arr, int length);
void sortArray(int *arr, int length, char f);
void printArray(int *arr, int c);

int main()
{
    int numCount = 0;
    int numb[MAX_SIZE] = {};

    printf("Enter count of numbers: ");
    scanf("%d", &numCount);

    printf("Enter your numbers:\n");
    getArray(numb, numCount);

    sortArray(numb, numCount, '>');

    int a = 0;
    while(numb[a] >= 0 && a < numCount)
        a++;

    sortArray(numb, a, '<');

    printArray(numb, numCount);



    return 0;
}

void getArray(int *arr, int length)
{
    int *aend = arr + length;
    while(arr < aend)
        scanf("%d", arr++);
}

void sortArray(int *arr, int length, char f)
{
    int iM = 0;
    for(int i = 0; i < length - 1; i++)
    {
        iM = i;

        for(int j = i + 1; j < length; j ++)
        {
            if((f == '>')? (arr[j] > arr[iM]):(arr[j] < arr[iM]))
                iM = j;
        }

        if(iM != i)
        {
            int a = arr[iM];
            arr[iM] = arr[i];
            arr[i] = a;
        }
    }
}

void printArray(int *arr, int c)
{
    int *aend = arr + c;
    while(arr < aend)
        printf("%d ", *(arr++));
}
