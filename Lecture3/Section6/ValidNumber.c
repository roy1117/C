#include <stdio.h>

int main(void)
{
    float fvalue = 1234567890.12345678901234567890;
    double dvalue = 1234567890.12345678901234567890;

    printf("float형 변수 = %30.25f\n", fvalue);
    printf("double 변수 = %30.25f\n", dvalue);

    float value = 0.1;
    printf("%.20f\n", value);
    return 0;
}