#include<stdio.h>
//쉼표 연산자 이해하기
main()
{
    int x =1,y = 2, max;

    max = x > y ? x : y;

    printf("max = %d, x=%d, y = %d",max,x,y);
}