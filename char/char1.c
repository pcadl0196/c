#include <stdio.h>
int main() {
    //char형 변수를 선언하는 부분
    char a;
    //문자 a를 대입, ''작은 따옴표를 써줘야함
    a = 'a';

    //%d에 들어갈 숫자는 a에 대응하는 숫자인 97
    printf("a의 값과 들어있는 문자는? 값 : %d, 문자 : %c \n",a,a);
    return 0;
}