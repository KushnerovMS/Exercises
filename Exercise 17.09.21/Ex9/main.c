#include <stdio.h>
#include <stdlib.h>

const int MAX_SIZE = 1000;

struct box
{
    int price;
    int sweetCount;
};

void sortBoxes(struct box boxes[], int length);

int main()
{
    struct box boxes[MAX_SIZE] = {};

    int boxCount = 0;
    int moneyCount = 0;

    scanf("%d", &boxCount);

    for(int i = 0; i < boxCount; i ++)
    {
        scanf("%d", &boxes[i].price);
        scanf("%d", &boxes[i].sweetCount);
    }

    scanf("%d", &moneyCount);

    int boughtSweetCount = 0;
    int boughtBoxCount = 0;
    for(int i = 0; i < boxCount && moneyCount >= boxes[i].price; i++)
    {
        boughtSweetCount += boxes[i].sweetCount;
        boughtBoxCount ++;
        moneyCount -= boxes[i].price;
    }

    printf("%d %d", boughtBoxCount, boughtSweetCount);

    return 0;
}

void sortBoxes(struct box boxes[], int length)
{
    int iMin = 0;
    for(int i = 0; i < length - 1; i++)
    {
        iMin = i;

        for(int j = i + 1; j < length; j ++)
        {
            if(boxes[j].price < boxes[iMin].price ||
            (boxes[j].price == boxes[iMin].price && boxes[j].sweetCount < boxes[iMin].sweetCount))
                iMin = j;
        }

        if(iMin != i)
        {
            struct box a = boxes[iMin];
            boxes[iMin] = boxes[i];
            boxes[i] = a;
        }
    }
}
