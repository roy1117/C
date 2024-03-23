#include <stdio.h>
const int EXCHANGE_RATE = 1100;
int main()
{
    short s_money = EXCHANGE_RATE;
    s_money = s_money - 1;
    printf("s_money = %d\n", s_money);
    return 0;
}