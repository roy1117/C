#include <stdio.h>

int main()
{
    printf("Hellow world\n");
    printf("�ȳ��ϼ���\n");
    for(int i = 1;i<4;i++)
    {
        printf("3X%d=%d\n", i, i*3);
    }
    int x=100, y=200, sum;//�ѹ��� ���� ���� ����
    printf("x ?\n");
    scanf("%d", &x);
    printf("y ?\n");
    scanf("%d", &y);
    printf("%5d + %5d = %5d\n", x, y, x+y); //���� ������ %d�� �ڸ��� ���� ����
    /* This is more than
    One comment.*/
    return 0;
}