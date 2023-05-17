#define _CRT_SECURE_NO_WARNINGS // 사용되지 않는 기능 사용에 대한 경고 사용 안 함 //
#include <math.h> // 수학 라이브러리 가져오기 //
#include <stdio.h> // 입출력 함수를 사용하기 위한 헤더 파일 //
int main(void) // 메인의 함수 정의 //
{
double height, distance, tree_height, degrees, radians; // 변수 선언 //
printf("나무와의 길이(단위는 미터): "); // 트리 거리 확인 팝업 표시 //
scanf("%lf", &distance); // 트리 거리 읽기 //
printf("측정자의 키(단위는 미터): "); // 키 확인 //
scanf("%lf", &height); // 키 읽기 //
printf("각도(단위는 도): "); // 각도 확인 //
scanf("%lf", &degrees); // 각도 읽기 //
radians = degrees * (3.141592 / 180.0); // 각도를 라디안으로 변환 //
tree_height = tan(radians) * distance + height; // 트리 높이 계산 //
printf("나무의 높이(단위는 미터): %lf \n", tree_height); // 인쇄 트리 높이 //
return 0; // 프로그램을 종료 //
}