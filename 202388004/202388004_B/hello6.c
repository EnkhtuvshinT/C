#include <stdio.h>

int main(void)
{
    char ch;
    printf("문자를 입력하시오:");

    ch=getchar();
    if(ch>='065'&&ch<='090')
    printf("%c는 대문자입니다.\n",ch);
    else if(ch>='097'&&ch<='122')
    printf("%c는 소문자입니다.\n,ch");
    else if(ch>='0'&&ch<='9')
    printf("%c는 숫자입니다.\n",ch);
    else
    printf("%c는 기타문자입니다.\n",ch);

    return 0;
    

}