/*
������ ���� ���� ����� ����Ϳ� ��µǰ� ���α׷��� �ۼ��ϼ���.

:: ������
   *
  ***
 *****
  ***
   *
*/
#include <stdio.h>

void simple(){
    printf("\n-> �ܼ� �����\n");
    printf("   *\n");
    printf("  ***\n");
    printf(" *****\n");
    printf("  ***\n");
    printf("   *\n");
}

void for_loop(){
    printf("\n-> for �ݺ���\n");
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