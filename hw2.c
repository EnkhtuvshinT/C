#include <stdlib.h> // 렌덤 함수를 사용하기 위한 헤더 파일 //
#include <stdio.h> // 입출력 함수를 사용하기 위한 헤더 파일 //
#include <conio.h> // 콘솔 입력/출력 작업을 가져오기 위한 라이브러리 //
#include <time.h> // 시간 관련 함수를 사용하기 위한 헤더 파일 //

void disp_car(int car_number, int distance) // 차량 번호와 거리를 표시하는 기능을 선언합니다 //
{
int i; // 루프 카운터로 사용할 변수 선언 //
printf("CAR #%d:", car_number); // 인쇄 차량 번호 //
for( i = 0; i < distance/10; i++ ) { // 10개의 거리마다 루프를 통과합니다 //
printf("*"); // 10 거리마다 * 인쇄 //
}
printf("\n"); // 새 행을 인쇄합니다 //
}
int main(void) // 주요 함수를 선언합니다 //
{ int i; // 루프 카운터로 사용할 변수 선언 //
int car1_dist=0, car2_dist=0; // car1 및 car2 거리에 대해 두 변수 선언 //
srand( (unsigned)time( NULL ) ); // 시간별 시드 난수 생성기 //
for( i = 0; i < 6; i++ ) { // 루프 6회 //
car1_dist += rand() % 100; // car1 거리에 0에서 99 사이의 난수를 추가합니다 //
car2_dist += rand() % 100; // car2 거리에 0에서 99 사이의 난수를 추가합니다 //
disp_car(1, car1_dist); // 1번 차량 거리로 함수 호출 //
disp_car(2, car2_dist); // 2번 차량 거리로 함수 호출 //
printf("---------------------\n"); // 구분선 인쇄 //
_getch(); // 입력 대기 //
}
return 0; // 주요 함수를 종료 //
}