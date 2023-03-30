#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{ 
    int x,y,sum=0;
    printf("첫번제 숫자를 입력하시오\n");
    scanf("%f",&x);
    printf("두번째 숫자를 입력하시오\n");
    scanf("%f",&y);
    sum = x +y;
    printf("두수의 합:%d", sum);

    return 0;




}
