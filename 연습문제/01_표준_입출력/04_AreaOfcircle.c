/*
원의 반지름을 입력받아서 넓이를 구하세요.
*/
#include <stdio.h>
void main(){
    int r;
    double pi = 3.14;

    printf("반지름을 입력하세요 : ");
    scanf("%d", &r);

    printf("원의 넓이는 %lf입니다.\n", r*r*pi);
    return;
}