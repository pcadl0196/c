#include <stdio.h>
//순환문 개념 배우기(for)
main() {
    int i;
    //변수는 선언과 동시에 초기화 할 수 있음
    int hap = 0;

    //for(초기값; 조건값; 증가값 또는 감소값;)
    for(i = 1; i <=10; i = i + 1)
    {
        hap = hap + i; //hap + i 먼저 실행 후 대입됨, 항상 오른쪽 먼저 실행한 후 왼쪽에 대입
    }

    printf("1부터 10까지의 합 : %d", hap);
}