#include <stdio.h>
#include <stdlib.h>

const int MAX_SIZE = 10;

int main()
{
    int matrix[MAX_SIZE][MAX_SIZE] = {};
    int msize = 0;

    printf("Enter size of your matrix:");
    scanf("%d", &msize);

    printf("Enter your matrix:\n");
    for(int i = 0; i < msize; i++)
    {
        for(int j = 0; j < msize; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Transpose matrix:\n");
    for(int i = 0; i < msize; i++)
    {
        for(int j = 0; j < msize; j++)
        {
            printf("%d\t", matrix[j][i]);
        }
        printf("\n");
    }
    return 0;
}
