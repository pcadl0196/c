#include <stdio.h>
int main() {
    int i;
    printf("입력하고 싶은 숫자를 입력하세요! : ");
    //키보드에서 문자나 숫자를 입력받는 함수
    scanf("%d", &i);

    //조건문, 괄호안의 조건이 참이라면 중괄호 안의 내용을 실행하게 되고 아니면 그냥 지나가게됨, ==는 관계연산자
    if(i == 7){
        printf("당신은 행운의 숫자 7을 입력했습니다.");
    }

    return 0;

}