#include <stdio.h>

int main()
{
    printf("Hellow world\n");
    printf("안녕하세요\n");
    for(int i = 1;i<4;i++)
    {
        printf("3X%d=%d\n", i, i*3);
    }
    int x=100, y=200, sum;//한번에 변수 선언 가눙
    printf("x ?\n");
    scanf("%d", &x);
    printf("y ?\n");
    scanf("%d", &y);
    printf("%5d + %5d = %5d\n", x, y, x+y); //형식 지정자 %d에 자릿수 지정 가능
    /* This is more than
    One comment.*/
    return 0;
}