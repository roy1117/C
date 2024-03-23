#include <stdio.h>

int main()
{
    int Fahrenheit ;
    printf("Fahrenheit : ");
    scanf("%d", &Fahrenheit);
    float Celius;

    printf("Fahrenheit=%d \n",Fahrenheit);
    Celius = (Fahrenheit - 32.0) * 5/9;
    printf("Celius=%f \n",Celius);
    return 0;
}