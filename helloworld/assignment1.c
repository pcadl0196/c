//대입연산자
#include <stdio.h>
int main(){
    //a라는 변수를 선언하고 a변수에 3의 값을 넣음
    int a = 3;
    //대입연산자와 산술연산자를 함께 나온것, +를 = 보다 먼저 연산함, 연산자 우선순위 때문
    a = a + 3;
    printf("a의 값은 : %d \n", a);
    return 0;
}