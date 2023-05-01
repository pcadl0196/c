#include <stdio.h>
//부호 연산자 이해하기(+,-)
main()
{
    int x = +4;
    int y = -2;

    printf("x + (-y) = %d \n", x+(-y));
    printf("-x + (+y) = %d \n", -x +(+y));
}