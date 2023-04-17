#include <stdio.h>
int main() {
    int i, j;

    for(i =1; i < 10; i++){
        for(j = 1; j < 10; j++){
            //구구단 만들기
            printf("%d x %d = %d \n", i,j, i * j);
        }
    }

    return 0;
}