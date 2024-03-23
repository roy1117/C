#include <stdio.h>

#define PI 3.141595

int main()
{
    int Radius ;
    printf("Radius : ");
    scanf("%d", &Radius);
    float demension, Perimeter;

    demension = Radius * Radius * PI;
    printf("demension=%f \n",demension);

    Perimeter = Radius * 2.0 * PI;
    printf("Perimeter=%f \n",Perimeter);

    return 0;
}