//prefix, postfix 예시
#include <stdio.h>
int main() {
    int a = 1;

    //1을 더해주고 값을 반환해줌
    printf("++a : %d \n", ++a);

    a = 1;
    //결과를 돌려준 이후 1을 더해줌, 1이란 값이 먼저 들어간 후 
    printf("a++ : %d \n", a++);
    //1이 출력된 이후 a에 1이 더해짐
    printf("a : %d \n", a);

    return 0;
}
