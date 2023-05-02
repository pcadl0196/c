#include <stdio.h>
//조건 연산자 이해하기
main()
{
    int x = 1;
    int y = 2;
    int max;

    max = x>y ? x : y;
    printf("max의 값은 %d \n", max);
}