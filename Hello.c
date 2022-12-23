#include <stdio.h>

int main()
{
    printf("사친 연산 계산기");

    int x, y;

    printf("x값 입력");     scanf("%d", &x);
    printf("y값 입력");     scanf("%d", &y);
    
    printf("%d + %d = %d", x, y, x + y);
    return 0;
}