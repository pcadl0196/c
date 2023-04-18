#include <stdio.h>
//함수 개념 배우기
int hapf(int value); //중복된 것을 피하기 위해 함수를 사용함

main() {
    printf("1부터 10까지의 합은 %d \n", hapf(10));
    printf("1부터 100까지의 합은 %d \n", hapf(100));
    printf("1부터 1000까지의 합은 %d \n", hapf(100));
}

//모든 함수의 선언부에는 세미콜론이 있고 실행 부분에서는 세미콜론이 없음
int hapf(int value){ //반환값 함수이름(전달값1, 전달값2, ...)
    int i;
    int hap = 0;

    for(i = 1; i <= value; i = i + 1){
        hap = hap + i;
    }
    return hap;
}