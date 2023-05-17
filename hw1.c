#include <stdlib.h> // 렌덤 함수를 사용하기 위한 헤더 파일 //
#include <stdio.h> // 입출력 함수를 사용하기 위한 헤더 파일 //
#include <time.h> // 시간 관련 함수를 사용하기 위한 헤더 파일 // 
int coin_toss(void); // 돈전 던지기 함수 선언 //
int main(void) // 주요 함수 //
{
  int toss; // 토스 변수를 선언 //
  int heads = 0; // heads를 초기화 //
  int tails = 0; // tails를 초기화 //
  srand((unsigned)time(NULL)); // 랜덤 시드 번호 생성기 //

 for (toss = 0; toss < 100; toss++) // 100번 돈전 던지기 //
{
if(coin_toss() == 1) // 동전의 앞면 //
heads++; // heads를 늘리다 //
else // 동전의 뒷면 // 
tails++; // tails를 늘리다 //
}
printf("동전의 앞면: %d \n", heads); // print heads //
printf("동전의 뒷면: %d \n", tails); // print tails //
return 0; // 프로그램을 종료 //
}
int coin_toss( void ) // 동전 던지기 기능을 하다 //
{
int head = rand() % 2; // 난수를 내다 //
return head; // return either //
}