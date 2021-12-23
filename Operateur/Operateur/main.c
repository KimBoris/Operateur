#include <stdio.h>

int main(void)
{



	//int a;
	//a = 3;
	//// = 4; = 이것은 말이 안되는 구문이다.
	////R-value는 L-value가 될 수 없다.
	////위 식은 왼쪽 피연산자는 반드시 L-value이어야 한다는 메세지를 호출한다.

	////const int a = 10;
	////a = 5; 
	////L-value가 상수화된 개체입니다. 라는 메세지 호출
	//putchar('A' + 1);


	//printf("%d", 4%7);

	// a = 0;
	// scanf_s("%d", &a);
	// printf("%d ", 7 / a);

	// //필수 실습 문제

	// //두 정수 입력 (10 , 20)
	// // 값 = 15.00

	// int b =0;
	// int c =0;
	// scanf_s("%d %d", &b,&c);
	// printf("%.2f", (b+c)/2.0);

	// printf("\n\n4000을 입력하시오\n\n");
	// scanf_s("%d", &b);
	// printf("%d초는 %d시간 %d분 %d초 입니다.", b, b / 3600, (b % 3600) / 60,(b% 3600) %60 );




	//<<교환>>

	int a = 10, b = 20, tmp = 0;
	tmp = a;
	a = b; 
	b = tmp;
	printf("%d %d", a, b);


	//<<세 정수의 누적 및 출력>>복합대입 연산자
	// 입력 - 1 2 3
	
	int nInput = 0, nTotal = 0;

	scanf_s("%d", &nInput);
	nTotal += nInput;
	scanf_s("%d", &nInput);
	nTotal += nInput;
	scanf_s("%d", &nInput);
	nTotal += nInput;

	printf(" Total : %d", nTotal);
	return 0;


	
}