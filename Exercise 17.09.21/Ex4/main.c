#include <stdio.h>
#include <stdlib.h>

const int MAX_SIZE = 10;

int main()
{
    char picture[MAX_SIZE][MAX_SIZE] = {};
    int width = 0;
    int height = 0;

    printf("Enter size of your picture:\n");
    printf("Height = ");
    scanf("%d", &height);
    printf("Width = ");
    scanf("%d", &width);
    getchar();

    for(int i = 0, j = 0; i < height; i ++, j = 0)
        while((picture[i][j++] = getchar()) != '\n')
            ;

    printf("Your flip picture:\n");
    for(int i = width - 1; i >= 0; i --)
    {
        for(int j = 0; j < height; j ++)
            putchar(picture[j][i]);

        putchar('\n');
    }

    return 0;
}
