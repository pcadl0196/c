#include <stdio.h>
//상수형 개념 배우기
//상수형 정의 , 상수는 값을 변화시킬 수 없음
#define X 1
#define PI 3.141592

main(){
    double z;
    //상수는 항상 대입 연산자의 오른쪽에 옴
    z = X + PI;

    printf("%f \n", z);
}