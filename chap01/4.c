#include <stdio.h>
//연산자 개념 배우기
main(){
    int x;
    int y;

    //= 은 대입연산자
    x = 10;
    y = x - 5;

    if(x > y)
    {
        printf("x의 값이 y보다 큽니다.");
    }
    else //주어진 조건이 거짓인 경우 실행
    {
        printf("x의 값이 y보다 작거나 같습니다.");
    }
}