//Kushnerov Mikhail B01 -107
#include <stdio.h>
#include <stdlib.h>

struct Point {
    int x;
    int y;
};

struct Rect {
    struct Point lt;
    struct Point rb;
};

struct Rect * max (struct Rect * rect1, struct Rect * rect2);

int main()
{
    struct Rect rect1 = {};
    struct Rect rect2 = {};
    printf ("rect1 : ");
    scanf ("%d %d %d %d", &rect1.lt.x, &rect1.lt.y, &rect1.rb.x, &rect1.rb.y);
    printf ("rect2 : ");
    scanf ("%d %d %d %d", &rect2.lt.x, &rect2.lt.y, &rect2.rb.x, &rect2.rb.y);
    printf("Max rect : rect%d\n", (max (&rect1, &rect2) == &rect1)? 1 : 2);
    return 0;
}

unsigned int positive (int x)
{
    return (x >= 0)? x : -x;
}

struct Rect * max (struct Rect * rect1, struct Rect * rect2)
{
    return (positive ((rect1 -> rb.x - rect1 -> lt.x) * (rect1 -> rb.y - rect1 -> lt.y)) >=
            positive ((rect2 -> rb.x - rect2 -> lt.x) * (rect2 -> rb.y - rect2 -> lt.y)))?
           rect1 : rect2;
}
