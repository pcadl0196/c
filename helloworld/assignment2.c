#include <stdio.h>
int main() {
    int a = 1, b = 1, c = 1, d = 1;

    //가장 기초적으로 1을 더하는 방법
    a =  a + 1;
    printf("a : %d \n", a);
    //b += 는 b = b + 1을 간략하게 쓰는것과 같은 의미(엄밀히말하면 조금 다름)
    b += 1;
    printf("b : %d \n", b);
    //(++)증감연산자, c를 1씩 증가(전위형, prefix)
    ++c;
    printf("c : %d \n", c);
    //d를 1씩 증가(후위형, postfix)
    d++;
    printf("d : %d \n", d);

    return 0;
}