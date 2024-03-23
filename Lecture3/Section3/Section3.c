#include <stdio.h>

#define EXCHANGE_RATE 344.60

int main()
{   
    int dollar = 1000;
    printf("Please enter dollar : ");
    scanf("%d", &dollar);
    printf("dollar %d is %d won", dollar, dollar * EXCHANGE_RATE);

    return 0;
}