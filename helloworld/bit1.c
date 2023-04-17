//비트연산
#include <stdio.h>
int main() {
    //10101111
    int a = 0xAF;
    //10110101
    int b = 0xB5;

    //10100101
    printf("%x \n", a & b);
    //10111111
    printf("%x \n", a | b);
    //00011010
    printf("%x \n", a ^ b);
    //111111~ 1111111 01010000
    printf("%x \n", ~a);
    //1010111100
    printf("%x \n", a << 2);
    //00010110, 각각 int형 변수는 4바이트이기 때문에 출력되는 값이 얼마인지는 염두에 두어야함
    printf("%x \n", b >> 3);

    return 0;
}