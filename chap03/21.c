#include <stdio.h>
//대입연산자 이해하기

main()
{
    int x = 1;
    int y = 2;
    int z;
    int zz;

    z = x + y;

    zz = printf("z의 값 : %d \n", z); //printf함수는 실행결과로써 몇 바이트를 출력했는지 반환
    printf("zz의 값 : %d \n", zz);
}