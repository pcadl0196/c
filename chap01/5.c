#include <stdio.h>
//조건문 개념 배우기
//주어진 수식에 대하여 참 또는 거짓을 구별하기 위해 조건문을 사용함
main() {
    int x;
    int y;

    x = 20;
    y = 10;

    if(x > y)
    {
        printf("x의 값이 y보다 큽니다.");
    }
    else
    {
        printf("x의 값이 y보다 작거나 같습니다.");
    }
}