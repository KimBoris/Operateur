#include <stdio.h>

int main(void)
{
	int a;
	a = 3;
	// = 4; = �̰��� ���� �ȵǴ� �����̴�.
	//R-value�� L-value�� �� �� ����.
	//�� ���� ���� �ǿ����ڴ� �ݵ�� L-value�̾�� �Ѵٴ� �޼����� ȣ���Ѵ�.

	//const int a = 10;
	//a = 5; 
	//L-value�� ���ȭ�� ��ü�Դϴ�. ��� �޼��� ȣ��
	putchar('A' + 1);


	printf("%d", 4%7);

	 a = 0;
	 scanf_s("%d", &a);
	 printf("%d ", 7 / a);

	 //�ʼ� �ǽ� ����

	 //�� ���� �Է� (10 , 20)
	 // �� = 15.00

	 int b =0;
	 int c =0;
	 scanf_s("%d %d", &b,&c);
	 printf("%.2f", (b+c)/2.0);

	 printf("\n\n4000�� �Է��Ͻÿ�\n\n");
	 scanf_s("%d", &b);
	 printf("%d�ʴ� %d�ð� %d�� %d�� �Դϴ�.", b, b / 3600, (b % 3600) / 60,(b% 3600) %60 );

	return 0;
}