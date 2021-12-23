#include <stdio.h>

int main(void)
{
	int a;
	a = 3;
	//// = 4; = 이것은 말이 안되는 구문이다.
	////R-value는 L-value가 될 수 없다.
	////위 식은 왼쪽 피연산자는 반드시 L-value이어야 한다는 메세지를 호출한다.
	const int a = 10;
	a = 5; 
	////L-value가 상수화된 개체입니다. 라는 메세지 호출
	putchar('A' + 1);
	printf("%d", 4%7);
	 a = 0;
	 scanf_s("%d", &a);
	 printf("%d ", 7 / a);
	// //필수 실습 문제
	// //두 정수 입력 (10 , 20)
	// // 값 = 15.00
	 int b =0;
	 int c =0;
	 scanf_s("%d %d", &b,&c);
	 printf("%.2f", (b+c)/2.0);

	 printf("\n\n4000을 입력하시오\n\n");
	 scanf_s("%d", &b);
	 printf("%d초는 %d시간 %d분 %d초 입니다.", b, b / 3600, (b % 3600) / 60,(b% 3600) %60 );

	//<<교환>>

	int a = 10, b = 20, tmp = 0;
	tmp = a;
	a = b; 
	b = tmp;
	printf("%d %d", a, b);


	////<<세 정수의 누적 및 출력>>복합대입 연산자
	//// 입력 - 1 2 3
	//
	int nInput = 0, nTotal = 0;

	scanf_s("%d", &nInput);
	nTotal += nInput;
	scanf_s("%d", &nInput);
	nTotal += nInput;
	scanf_s("%d", &nInput);
	nTotal += nInput;

	printf(" Total : %d", nTotal);

	//<<마스크 연산>>
	//상수 0 과 변수의 특정 비트열에 대해 비트 And연산함으로써 일정 구간이 모두 0이 되도록 의도한 연산을
	//Mask연산 이라고 한다.
	//마스크라는 것의 의미는 불필요한 정보를 가려서 필요한 정보만 골라 냄을 의미한다.

	int nData = 0x11223344;

	printf("&08X\n", nData & 0xFFFF0000); 
	printf("&08X\n", nData & 0x00FFFF00); 
	printf("&08X\n", nData & 0x0000FFFF); 
	printf("&08X\n", nData & 0xFF0000FF); 


	int nColor = 0x1234; // 
	int nRedMask = 0xF800;
	int nGreenMask = 0x7C0;
	int nBlueMask = 0x1F;

	printf("Red : %d\n", (nColor & nRedMask) >> 11);
	


	//<<예제 문제>>
	//총 100,000비트로 이루어진 이진수 A와 B가 주어진다. 이 때 A&B, A|B, A^B, ~A, ~B를 한 값을 출력하는 프로그램 작성
	//입력 > 첫째줄에 이진수 A, 둘째 줄에 이진수 B가 주어진다.
	//두 이진수의 길이는 모두 100,000이다.
	//예제의 경우에만 길이가 10이며, 예제는 채점하지 않는다.

	
	printf("%d\n", 3);
	printf("%d\n", ~3 + 1); 

	return 0;
}