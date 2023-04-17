#include <stdio.h>
int main() {
    int *p;
    int a;

    p = &a; //포인터 p에 a의 주소를 집어넣음
    a = 2; //a에 2를 대입

    printf("a의 값  : %d \n", a);
    printf("p의 값 : %d \n", *p); //*p와 a는 정확히 동일함

    return 0;
}