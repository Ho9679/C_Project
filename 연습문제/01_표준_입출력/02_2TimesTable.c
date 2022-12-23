/*
서식 문자를 이용하여 다음과 같이 구구단 2단을 출력하는 프로그램을 작성하세요.

:: 실행결과
2 * 1 = 2 
2 * 2 = 4 
2 * 3 = 6 
2 * 4 = 8 
2 * 5 = 10
2 * 6 = 12
2 * 7 = 14
2 * 8 = 16
2 * 9 = 18
*/
#include <stdio.h>
void simple(){
    printf("\n-> 단순 입출력\n");
    printf("2 * 1 = %d\n", 2*1);
    printf("2 * 2 = %d\n", 2*2);
    printf("2 * 3 = %d\n", 2*3);
    printf("2 * 4 = %d\n", 2*4);
    printf("2 * 5 = %d\n", 2*5);
    printf("2 * 6 = %d\n", 2*6);
    printf("2 * 7 = %d\n", 2*7);
    printf("2 * 8 = %d\n", 2*8);
    printf("2 * 9 = %d\n", 2*9);
    return;
}
void for_loop(){
    printf("\n-> for 반복문\n");
    for(int i=0; i<10; i++){
        printf("2 * %d = %d\n", i, i*2);
    }
    return;
}

void main(){
    simple();
    for_loop();

    return;
}