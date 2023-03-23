#include <stdio.h>
int main(void)
{

    int x,y,re;
    int n1=0,n2=0,n3=0;
    scanf("%d%d,&x,&y");

    n1=y%10;
    n2=x*(y/10%10);
    n3=x*(y/100);

    printf("%d\n",x*n1);
    printf("%d\n",n2);
    printf("%d\n",n3);
    printf("%d\n",n3);

    printf("%d",n3*100+n2*10+n1);



}