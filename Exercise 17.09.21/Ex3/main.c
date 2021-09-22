#include <stdio.h>
#include <stdlib.h>

const int MAX_SIZE = 10;

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
    for(int i = 0; i < height; i++)
    {
        for(int j = 0; j < width; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Transpose matrix:\n");
    for(int i = 0; i < width; i++)
    {
        for(int j = 0; j < height; j++)
        {
            printf("%d\t", matrix[j][i]);
        }
        printf("\n");
    }
    return 0;
}
