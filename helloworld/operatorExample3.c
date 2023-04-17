#include <stdio.h>

int main() {
    unsigned int b = 4294967295;
    printf("b : %u \n", b);

    //b의 최대값을 대입한 뒤에 1을 추가한다면 = 0이나옴(자료형의 크기를 초과했기 때문)
    b++;
    printf("b : %u \n", b);

    return 0;

}