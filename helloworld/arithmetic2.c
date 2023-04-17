#include <stdio.h>
int main(){
    //a는 정수형 변수 
    int a;
    //b는 실수형 변수
    double b;

    a = 10;
    b = 3;
    //연산 후 결과를 실수형으로 반환(%f)
    printf("a / b 는 : %f \n", a / b);
    //만약 %d로 바꾼다면 실수형으로 반환되었기 때문에 오류가 발생하게 됨
    printf("b / a 는 : %f \n", b / a);
    return 0;
}