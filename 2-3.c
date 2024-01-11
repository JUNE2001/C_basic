/*
    printf 함수의 기본적인 이해

    서식문자(conversion specifier) : 출력 형태를 지정하는 용도
    ex) %d
*/

#include <stdio.h>

int main(void)
{
    printf("Hello Everybody\n");
    printf("%d\n", 1234);
    printf("%d %d\n", 10, 20);

    printf("My age : %d \n", 20);
    printf("%d is my point \n", 100);
    printf("Good \nmorning \neverybody\n");

    //문제1
    printf("제 이름은 홍길동입니다.\n");
    printf("제 나이는 %d살이고요.\n", 20);
    printf("제가 사는 곳의 번지수는 %d-%d입니다.\n", 123, 456);

    //문제2
    printf("%d * %d = %d\n", 4,5,20);
    printf("%d * %d = %d\n", 7, 9, 63);

    return 0;

}