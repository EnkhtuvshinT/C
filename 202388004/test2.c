#include <stdio.h>

int main(void)
{
    float rate;
    float a;
    int b;

    printf("환율을 입력하시오:");
    scanf("%f",&rate);

    printf("원화 금액을 입력하시오:");
    scanf("%d",&b);

    a=b/rate;

    printf("원화 %d원은 %f달러입니다.\n",b,a);

    return 0;
}