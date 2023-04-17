#include <stdio.h>
// 변수형 개념 배우기
// 변수이름으로 3saram 이런것도 불가(숫자로 시작하면 안됨)
main(){
    //정수형 변수를 정의하고 사용
    int x;
    int y;
    int z;

    //변수에 값 대입
    x = 1;
    y = 2;

    z = x + y;

    //\n을 안해주면 줄바꿈이 안되는 매우 보기 불편한 상황 발생
    printf("%d \n", z);
}