#include <stdio.h>
#include <stdlib.h>

const int MAX_SIZE = 100;

void getMatrix(int matrix[][MAX_SIZE], int width, int height);

int main()
{
    int matrix[MAX_SIZE][MAX_SIZE] = {};
    int width = 0;
    int height = 0;

    printf("Enter size of your matrix:\n");
    printf("Height = ");
    scanf("%d", &height);
    printf("Width = ");
    scanf("%d", &width);

    printf("Enter your matrix:\n");

    getMatrix(matrix, width, height);

    int maxi = 0;
    int maxSum = 0;
    for(int i = 0; i < width; i++)
    {
        int sum = 0;
        for(int j = 0; j < height; j ++)
            sum += matrix[j][i];
        if(sum > maxSum)
        {
            maxSum = sum;
            maxi = i;
        }
    }

    printf("%d", maxi);

    return 0;
}

void getMatrix(int matrix[][MAX_SIZE], int width, int height)
{
    for(int i = 0; i < height; i ++)
        for(int j = 0; j < width; j ++)
            scanf("%d", &matrix[i][j]);
}
