#include <stdio.h>
#include <stdlib.h>

const int MAX_SIZE = 1000;

int main()
{
    struct box
    {
        int price;
        int sweetCount;
    } boxes[MAX_SIZE] = {};

    int boxCount = 0;
    int moneyCount = 0;

    scanf("%d", &boxCount);

    for(int i = 0; i < boxCount; i ++)
    {
        scanf("%d", &boxes[i].price);
        scanf("%d", &boxes[i].sweetCount);
    }

    scanf("%d", &moneyCount);

    int bestBox = 0;
    int bestBoxCount = 0;
    int bestSweetCount = 0;

    for(int i = 0; i < boxCount; i ++)
    {
        int boxCount = moneyCount / (boxes[i].price);
        if(boxCount == bestBoxCount && bestSweetCount < boxCount*boxes[i].sweetCount)
        {
            bestSweetCount = boxCount*boxes[i].sweetCount;
            bestBox = i;
        }
        else if(boxCount > bestBoxCount)
        {
            bestBoxCount = boxCount;
            bestSweetCount = bestBoxCount*boxes[i].sweetCount;
            bestBox = i;
        }
    }

    printf("%d %d", bestBoxCount, bestBoxCount*boxes[bestBox].sweetCount);

    return 0;
}
