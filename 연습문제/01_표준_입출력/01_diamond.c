/*
다음과 같은 실행 결과가 모니터에 출력되게 프로그램을 작성하세요.

:: 실행결과
   *
  ***
 *****
  ***
   *
*/
#include <stdio.h>

void simple(){
    printf("\n-> 단순 입출력\n");
    printf("   *\n");
    printf("  ***\n");
    printf(" *****\n");
    printf("  ***\n");
    printf("   *\n");
}

void for_loop(){
    printf("\n-> for 반복문\n");
    for(int i = 0; i < 3; i++){
        for(int j = 3-i; j > 0; j--){
            printf(" ");
        }
        for(int k = 0; k < (i*2)+1; k++){
            printf("*");
        }
        printf("\n");
    }
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2+i; j++){
            printf(" ");
        }
        for(int k = 3-(i*2); k > 0; k--){
            printf("*");
        }
        printf("\n");
    }
}

void main(){
    simple();
    for_loop();
   
    return;
}