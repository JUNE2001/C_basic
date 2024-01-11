/*
연산자 : =, + , -, *, /, %
*/

#include <stdio.h>

int main(void){
    int num1, num2;
    int num3=30, num4=40;

    printf("num1: %d, num2 : %d \n", num1, num2);   //값 선언을 하지 않아 메모리 속 쓰레기 값이 출력
    num1=10;
    num2=20;

    printf("num1: %d, num2:  %d \n", num1, num2);
    printf("num3: %d, num4:  %d \n", num3, num4);

    int result = num1+num2;
    printf("덧셈 결과 : %d \n", result);
    printf("%d + %d = %d \n", num1, num2, result);
    printf("%d와 %d의 합은 %d입니다. \n", num1, num2, result);

    return 0;

}