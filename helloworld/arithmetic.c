// 산술연산
#include <stdio.h>
int main(){
    int a, b;
    //a라는 변수에 10을 대입
    a = 10;
    //b라는 변수에 3을 대입
    b = 3;
    printf("a + b는 : %d \n", a + b);
    printf("a - b는 : %d \n", a - b );
    printf("a * b는 : %d \n", a * b);
    //a, b는 모두 정수 데이터만 저리하기 때문에 정수 부분인 3만 남기게 됨
    printf("a / b는 : %d \n", a / b);
    //%%는 %를 '표시'하기 위한 방법, %하나로는 %d등과 헷갈리기 때문임
    printf("a %% b는 : %d \n", a % b);
    return 0;
}