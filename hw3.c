// 삼각 함수 라이브러리
#include <math.h> // 수학 라이브러리 가져오기 //
#include <stdio.h> // 입출력 함수를 사용하기 위한 헤더 파일 //
int main( void ) // 메인의 함수 정의 //
{
double pi = 3.1415926535; // pi 선언 및 할당 //
double x, y; // 두 개의 이중 변수 x와 y를 선언 //
x = pi / 2; // x에 pi/2 할당 //
y = sin( x ); // assign sin of x to y //
printf( "sin( %f ) = %f\n", x, y ); // x의 sin를 인쇄 //
y = cos( x ); // assign cos of x to y //
printf( "cos( %f ) = %f\n", x, y ); // x의 cos를 인쇄 //
} 