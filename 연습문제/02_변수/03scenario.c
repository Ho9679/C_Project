/*
다음 시나리오에 맞게 코드의 빈칸을 채우세요.


*/
#include <stdio.h>
void main(){
    int red=1, blue=2;
    int yellow;

    printf("before \n");
    printf("red = %d, blue = %d \n", red, blue);

    yellow = red;
    red = blue;
    blue = yellow;
    
    printf("after \n");
    printf("red = %d, blue = %d \n", red, blue);
    
    return;
}