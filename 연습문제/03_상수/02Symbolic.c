/*
������ ���� ����� ��µǰ� �ɺ��� ����� �̿��� ���α׷��� �ۼ��ϼ���.

:: ������
���ش� 2010���Դϴ�.
�� ���̴� 20���Դϴ�.
���� 1990�⿡ �¾ 20��° �ذ� �Ǿ����ϴ�.
�� ������ ���̴� 18���Դϴ�.
�� ������ 1992�⿡ �¿��� 18��° �ذ� �Ǿ����ϴ�.
*/
#include <stdio.h>

#define thisYear 2010

void main(){
    
    const int myBirth = 1990;
    const int broBirth = 1992;

    printf("���ش� %d���Դϴ�.\n", thisYear);
    printf("�� ���̴� %d���Դϴ�.\n",thisYear-myBirth);
    printf("���� %d�⿡ �¾ %d��° �ذ� �Ǿ����ϴ�.\n", myBirth, thisYear-myBirth);
    printf("�� ������ ���̴� %d���Դϴ�.\n",thisYear-broBirth);
    printf("�� ������ %d�⿡ �¿��� %d��° �ذ� �Ǿ����ϴ�.\n",broBirth, thisYear-broBirth);
    
    return;
}