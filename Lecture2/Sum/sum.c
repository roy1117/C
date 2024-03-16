#include <stdio.h>

int main()
{
    int x, y, sum;
    x = 100;
    y = 200;
    printf("x=?");
    scanf("%d", &x);
    printf("y=?");
    scanf("%d", &y);
    printf("x + y = %d\n", x + y);
    printf("x - y = %d\n", x - y);
    printf("x * y = %d\n", x * y);
    printf("x / y = %d\n", x / y);
    return 0;
}