#include <stdio.h>
//정수형 상수 이해하기
#define    HUNDRED_THOUSAND 100000

const int   j = 200000;

main() 
{
    //HUNDRED_THOUSAND = 100000; //에러발생 
    //j = 200000; //에러발생

    printf("정수형 상수 HUNDRED_THOUSAND의 값은 %d \n", HUNDRED_THOUSAND);
    printf("정수형 상수 j의 값은 %d \n", j);
}