#include <stdio.h>
//문자형 상수 이해하기(char)
#define       HUNDRED      100

const char    j = 10;

main()
{
    //HUNDRED = 200; //에러가남
    //j = 200; //에러가남

    printf("문자형 상수 HUNDRED의 값은 %d \n", HUNDRED);
    printf("문자형 상수 j의 값은 %d \n", j);
}