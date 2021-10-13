//Kushnerov Mikhail B01 -107
#include <stdio.h>
#include <stdlib.h>

struct Point {
    int x;
    int y;
};

int main()
{
    struct Point p1 = {};
    struct Point p2 = {};

    scanf ("%d %d", &p1.x, &p1.y);
    scanf ("%d %d", &p2.x, &p2.y);

    printf("%s\n", (p1.x == p2.x || p1.y == p2.y)? "YES" : "NO");
    return 0;
}
