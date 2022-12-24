/*
다음 코드에서 잘못 선언된 변수를 찾고 수정하세요.
#include <stdio.h>
void main(){
    int int;
    int 2010_ymca;
    int freeLec
    int a A;

    printf("howTo = %d", howTo);

    int howTo=2-;
    int one+two;
}
*/
#include <stdio.h>
void main(){
//    int int;  //예약어 사용
//    int 2010_ymca;    //변수 첫 문자 숫자 사용
    int freeLec;
//    int a A;  //변수 두개 이상 선언시 변수 사이 ','필요

    int howTo = 20; //변수 선언은 제일 앞쪽에서 한다.

    printf("howTo = %d", howTo);

//    int one+two;  //변수명에 연산자 사용불가
}