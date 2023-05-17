#include <stdio.h> // 입출력 함수를 사용하기 위한 헤더 파일 //
#include <math.h> // 수학 라이브러리 가져오기 //
int menu(void) // 메뉴 함수 선택 //
{
int n; // n 변수를 정수로 선언 //
printf("1.팩토리얼\n"); // 인쇄 끈 //
printf("2.싸인\n"); // 인쇄 끈 //
printf("3.로그(base 10)\n"); // 인쇄 끈 //
printf("4.제곱근\n"); // 인쇄 끈 //
printf("5.순열(nPr)\n"); // 인쇄 끈 //
printf("6.조합(nCr)\n"); // 인쇄 끈 //
printf("7.종료\n"); // 인쇄 끈 //
printf("선택해주세요: "); // 인쇄 끈 //
scanf("%d", &n); // 정수를 읽고 n으로 저장 //
return n; // return value of n //
}
void factorial() { // 함수를 선언 // 
long long n, result=1,i; // n, result, i를 long 정수로 선언 //
printf("정수를 입력하시오: "); // 인쇄 끈 //
scanf("%lld", &n); // long 정수를 읽고 n으로 저장 //
for (i = 1; i <= n; i++) // 1부터 n까지 루프 실행 //
result = result *i; // result에 i를 곱함 //
printf("결과 = %lld\n\n", result); // print result //
}
void sine() { // 함수를 선언 // 
double a, result; // a, result를 double로 선언 //
printf("각도를 입력하시오: "); // 인쇄 끈 //
scanf("%lf", &a); // double 읽고 a로 저장 // 
result = sin(a); // sin of a로 result을 할당 //
printf("결과 = %lf\n\n", result); // print result //
}
void logBase10() // 함수를 선언 // 
{
double a, result; // a, result를 double로 선언 //
printf("실수값을 입력하시오: "); // 인쇄 끈 //
scanf("%lf", &a); // double 읽고 a로 저장 // 
if (a <= 0.0) // a가 0보다 작거나 같은지 확인 //
printf("오류\n"); // 인쇄 끈 //
else {
result = log10(a); // 로그 베이스 10에 result 할당 //
printf("결과 = %lf\n\n", result); // print result //
}
}
int main(void) // 함수를 선언 // 
{
while (1) { // while loop 실행 //
switch (menu()) { // 
case 1: // if 1 //
factorial(); // factorial 함수 실행 //
break; // break //
case 2: // if 2 //
sine(); // sine 함수 실행 //
break; // break //
case 3: // if 3 //
logBase10(); // 함수 실행 //
break; // break //
case 7: // if 7 //
printf("종료합니다.\n"); // 인쇄 끈 //
return 0; // return 0 //
default: // else //
printf("잘못된 선택입니다.\n"); // 인쇄 끈 //
break; // break //
}
}
}