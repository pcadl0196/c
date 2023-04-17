#include <stdio.h>
int main() {
    //int형 배열을 선언한다는 의미, 각 원소의 값들은 중괄호 속의 값들이 순차적으로 들어감
    int arr[10] = {2, 10, 30, 21, 34, 23, 53, 21, 9, 1};
    int i;
    for(i = 0;i <10; i++){
        printf("배열의 %d번째 원소 : %d \n", i + 1, arr[i]);
    }
    return 0;
}