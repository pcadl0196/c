#include <stdio.h>
//문자열형 상수 이해하기(char)
#define KOREA  "대한민국"
#define BOOK  "This is a book"

const char*SOCCOR = "나는 축구를 좋아합니다.";

main()
{
    printf("문자열형 상수 KOREA의 값 : %s \n", KOREA);
    printf("문자열형 상수 BOOK의 값 : %s \n", BOOK);
    printf("문자열형 상수 SOCCER의 값 : %s \n", SOCCOR);
}