#include <stdio.h>
int main() {
    int i;
    char c;

    printf("값을 입력해주세요! \n");
    scanf("%c", &c);

    for(i = 1; i <= 3; ++i) { 
        printf("%c", c);
    }

    return 0;
}