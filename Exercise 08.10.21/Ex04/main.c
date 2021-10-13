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

void normalize(struct Rect * rect);

int main()
{
    struct Rect rect = {};
    printf ("rect : ");
    scanf ("%d %d %d %d", &rect.lt.x, &rect.lt.y, &rect.rb.x, &rect.rb.y);
    normalize (&rect);
    printf("%d %d %d %d\n", rect.lt.x, rect.lt.y, rect.rb.x, rect.rb.y);
    return 0;
}

void normalize(struct Rect * rect)
{
    if (rect -> lt.x > rect -> rb.x)
    {
        int a = rect -> lt.x;
        rect -> lt.x = rect -> rb.x;
        rect -> rb.x = a;
    }
    if (rect -> rb.y > rect -> lt.y)
    {
        int a = rect -> lt.y;
        rect -> lt.y = rect -> rb.y;
        rect -> rb.y = a;
    }
}
