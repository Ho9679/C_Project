/*
두 정수를 입력받아 두 숫자의 합과 차를 출력하는 프로그램을 작성하세요.

:: 실행결과
두 정수를 입력하세요 : 45 23
합 : 45 + 23 = 68
차 : 45 - 23 = 22
*/
#include <stdio.h>

void main(){
    int x, y;
    printf("두 정수를 입력하세요 : ");
    scanf("%d %d", &x, &y);

    printf("합 : %d + %d = %d\n", x, y, x+y);
    printf("차 : %d - %d = %d\n", x, y, x-y);
}