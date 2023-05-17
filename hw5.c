#include <stdio.h> // 입출력 함수를 사용하기 위한 헤더 파일 //
#include <time.h> // 시간 관련 함수를 사용하기 위한 헤더 파일 // 
int main(void) // main 함수 선언 //
{
time_t start, end; // 두 변수 start 및 end 선언 //
start = time(NULL); // 시간을 start에 저장 //
printf("10초가 되면 아무 키나 누르세요\n"); // 명세서를 인쇄 //
while (1) { // loop //
if (getchar()) // get the character //
break; // break the loop // 
}
printf("종료되었습니다.\n"); // 명세서를 인쇄 //
end = time(NULL); // 시간을 end에 저장 //
printf("경과된 시간은 %ld 초입니다. \n", end - start); // 경과시간 인쇄 //
return 0; // 프로그램 종료 // 
}