#include <stdio.h>
//실수형 변수 이해하기(double)
//실수형 변수는 다른 일반 변수혀과 달리 정밀도라는 것을 가지고 있음
//정밀도라는 것은 소수점 이하 몇자리까지를 표시하는가를 나타내며, float형과 double 형의 정밀도는 다름
main()
{
    float d;
    double d1;
    double d2;

    d = 3.141592;
    d1 = 1234567890;
    d2 = 'c'; //c의 아스키 값은 99

    printf("실수형 변수 d의 값은 %E \n", d);
    printf("실수형 변수 d1의 값은 %E \n", d1);
    printf("실수형 변수 d2의 값은 %E \n", d2);
}