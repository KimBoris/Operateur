#include <stdio.h>

int main(void)
{
	int a;
	a = 3;
	//// = 4; = �̰��� ���� �ȵǴ� �����̴�.
	////R-value�� L-value�� �� �� ����.
	////�� ���� ���� �ǿ����ڴ� �ݵ�� L-value�̾�� �Ѵٴ� �޼����� ȣ���Ѵ�.
	const int a = 10;
	a = 5; 
	////L-value�� ���ȭ�� ��ü�Դϴ�. ��� �޼��� ȣ��
	putchar('A' + 1);
	printf("%d", 4%7);
	 a = 0;
	 scanf_s("%d", &a);
	 printf("%d ", 7 / a);
	// //�ʼ� �ǽ� ����
	// //�� ���� �Է� (10 , 20)
	// // �� = 15.00
	 int b =0;
	 int c =0;
	 scanf_s("%d %d", &b,&c);
	 printf("%.2f", (b+c)/2.0);

	 printf("\n\n4000�� �Է��Ͻÿ�\n\n");
	 scanf_s("%d", &b);
	 printf("%d�ʴ� %d�ð� %d�� %d�� �Դϴ�.", b, b / 3600, (b % 3600) / 60,(b% 3600) %60 );

	//<<��ȯ>>

	int a = 10, b = 20, tmp = 0;
	tmp = a;
	a = b; 
	b = tmp;
	printf("%d %d", a, b);


	////<<�� ������ ���� �� ���>>���մ��� ������
	//// �Է� - 1 2 3
	//
	int nInput = 0, nTotal = 0;

	scanf_s("%d", &nInput);
	nTotal += nInput;
	scanf_s("%d", &nInput);
	nTotal += nInput;
	scanf_s("%d", &nInput);
	nTotal += nInput;

	printf(" Total : %d", nTotal);

	//<<����ũ ����>>
	//��� 0 �� ������ Ư�� ��Ʈ���� ���� ��Ʈ And���������ν� ���� ������ ��� 0�� �ǵ��� �ǵ��� ������
	//Mask���� �̶�� �Ѵ�.
	//����ũ��� ���� �ǹ̴� ���ʿ��� ������ ������ �ʿ��� ������ ��� ���� �ǹ��Ѵ�.

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
	


	//<<���� ����>>
	//�� 100,000��Ʈ�� �̷���� ������ A�� B�� �־�����. �� �� A&B, A|B, A^B, ~A, ~B�� �� ���� ����ϴ� ���α׷� �ۼ�
	//�Է� > ù°�ٿ� ������ A, ��° �ٿ� ������ B�� �־�����.
	//�� �������� ���̴� ��� 100,000�̴�.
	//������ ��쿡�� ���̰� 10�̸�, ������ ä������ �ʴ´�.

	
	printf("%d\n", 3);
	printf("%d\n", ~3 + 1); 

	return 0;
}