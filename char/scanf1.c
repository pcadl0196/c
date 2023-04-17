#include <stdio.h>
int main() {
    double celsius; //섭씨온도

    printf("섭씨온도를 화씨온도로 바꿔주는 프로그램 입니다 \n");
    printf("섭씨온도를 입력해주세요 : ");
    scanf("%lf", &celsius); //섭씨온도를 입력받는다

    printf("섭씨 %f는 화씨온도로 %f도 입니다 \n", celsius, 9 * celsius /5 + 32);

    return 0;
}