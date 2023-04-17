#include <stdio.h>
//상수 예제
int main() {
    //상수로 선언, 형태는 const (상수의 형)(상수이름) = (상수의 값);
    const int a = 3; //상수는 처음에 한번 지정된 값은 절대로 변하지 않는다는 것
    
    printf("%d", a);
    return 0;
}