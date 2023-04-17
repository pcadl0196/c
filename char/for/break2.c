#include <stdio.h>
int main() {
    for(;;){
        //break앞에 존재하는 printf, a가 출력되고 for 문을 빠져나가 종료되게 됨
        printf("a");
        break;
    }

    return 0;
}