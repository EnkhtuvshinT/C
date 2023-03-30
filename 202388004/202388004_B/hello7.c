#include <stdio.h>

int main(void)
{
    int A,B;
    printf("A,B 값을 입력하시오\n");
    scanf("%d,%d",&A,&B);

    if(A>B)
    {
        printf(">");
    }
    else if(A<B)
    {
        printf("<");
    }
    else
    {
        printf("==");
    }
    return 0;
    
}