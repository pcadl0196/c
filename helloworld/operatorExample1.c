#include <stdio.h>

int main() {
    //int 값 a를 정의한 후 int가 표현할 수 있는 최대값을 대입
    int a = 2147483647;
    printf("a : %d \n", a);

    //a++로 int가 표현할 수 있는 최대값을 넘어버림, 값이 이상하게 출력됨
    a++;
    printf("a : %d \n", a);

    return 0;
}