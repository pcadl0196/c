#include <stdio.h>
int main() {
    int i;

    for(i = 0; i < 100; i++){
        //break문과 달리 for문을 빠져나가지 않고 그냥 패스 해주는 것
        if(i%5 == 0) continue;

        //i값이 5의 배수인 경우에만 printf가 실행되지 않게 하는것
        printf("%d ", i);

    }

    return 0;
}