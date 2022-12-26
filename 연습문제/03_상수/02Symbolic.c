/*
다음과 같은 결과가 출력되게 심볼릭 상수를 이용해 프로그램을 작성하세요.

:: 실행결과
올해는 2010년입니다.
내 나이는 20살입니다.
나는 1990년에 태어나 20번째 해가 되었습니다.
내 동생의 나이는 18살입니다.
내 동생은 1992년에 태에나 18번째 해가 되었습니다.
*/
#include <stdio.h>

#define thisYear 2010

void main(){
    
    const int myBirth = 1990;
    const int broBirth = 1992;

    printf("올해는 %d년입니다.\n", thisYear);
    printf("내 나이는 %d살입니다.\n",thisYear-myBirth);
    printf("나는 %d년에 태어나 %d번째 해가 되었습니다.\n", myBirth, thisYear-myBirth);
    printf("내 동생의 나이는 %d살입니다.\n",thisYear-broBirth);
    printf("내 동생은 %d년에 태에나 %d번째 해가 되었습니다.\n",broBirth, thisYear-broBirth);
    
    return;
}