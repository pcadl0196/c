#include <stdio.h>
//실수형 상수 이해하기
#define PI   3.141592

const double j = 1.23456789;

main()
{
    //PI = 3.141592; //에러발생
    //j = 1.23456789; //에러발생

    printf("실수형 상수 PI의 값은 %f \n", PI);
    printf("실수형 상수 j의 값은 %f \n",j);
}