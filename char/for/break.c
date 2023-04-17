#include <stdio.h>
int main() {
    int usranswer;

    printf("컴퓨터가 생각한 숫자를 맞추어 보세요! \n");

    //for문이 계속 참임을 나타내는 표현, 계속 참이면 for문을 계속 실행함
    for(;;){
        scanf("%d", &usranswer);
        if(usranswer == 3){
            printf("맞추셨군요! \n");
            break;
        }else{
            printf("틀렸어요! \n");
        }
    }

    return 0;
}