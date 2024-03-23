#include <stdio.h>

int main()
{
    int a, b, temp;

    a = 100;
    b = 200;
    printf("a ดย : ");
    scanf("%d", &a);

    printf("b : ");
    scanf("%d", &b);
    
    printf("a : %d, b : %d\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("a : %d, b : %d\n", a, b);
    return 0;
}