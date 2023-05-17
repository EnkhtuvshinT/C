#include <stdio.h> // 입출력 함수를 사용하기 위한 헤더 파일 //
#include <math.h> // 수학 라이브러리 가져오기 //
#define PI 3.141592 // PI를 상수로 정의 //
double rad(double degree) // double를 매개 변수로 사용하고 double를 반환하는 함수를 선언 //
{
return PI * degree / 180.0; // 계산 결과를 반환 //
}
void drawbar(int height) // int를 매개 변수로 사용하고 아무것도 반환하지 않는 함수를 선언 //
{
for (int i = 0; i < height; i++) // 전달된 매개 변수를 순환 //
printf("*"); // print * //
printf("\n"); // 새 행을 인쇄 //
}
int main(void) // 메인의 함수 정의 //
{
int degree, x, y; // 세 개의 int 변수를 선언 //
for (degree = 0; degree <= 90; degree += 10) { // 0에서 90으로 루프 10씩 증분 //
y = (int)(60 * sin(rad((double)degree)) + 0.5); // y에 대한 값을 계산합니다 //
drawbar(y); // 매개 변수로 계산된 값 //
}
return 0; // 프로그램을 종료 //
}