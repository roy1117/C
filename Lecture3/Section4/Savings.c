#include <stdio.h>
#define PERIOD 30
int main()
{
    int saving;
    printf("Please enter monthly saving:");
    scanf("%d", &saving);
    printf("The money after 30 years : %d", saving * 12 * PERIOD);
    return 0;
}