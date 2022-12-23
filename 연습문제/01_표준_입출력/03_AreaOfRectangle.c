/*
직사각형의 가로와 세로의 길이를 입력받아 넓이를 구하는 프로그램을 작성하세요
*/
#include <stdio.h>

void main(){
    int a, b;
    printf("가로 길이를 입력하세요 : ");
    scanf("%d", &a);
    printf("세로 길이를 입력하세요 : ");
    scanf("%d", &b);
    printf("직사각형의 넓이는 %d입니다.\n", a*b);
    return;
}