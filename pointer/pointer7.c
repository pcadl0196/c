#include <stdio.h>
//포인터 뺄셈
int main() {
    int a;
    int* pa = &a;

    printf("pa의 값 : %p \n", pa);
    printf("(pa -1) 의 값 : %p \n", pa - 1);

    return 0;
}