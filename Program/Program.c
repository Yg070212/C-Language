#include <stdio.h> 

void main()
{
#pragma region �����÷ο�
	// Ư���� �ڷ����� ǥ���� �� �ִ� �ִ��� ������
	// �Ѿ ������ �����ϴ� �����Դϴ�.

	// char character = 129; // <- -128
	
	// printf("character ������ �� : %d\n", character);

	// �����÷ο�� ��ȣ ���� �ڷ��������� �Ȱ��� �߻��ϸ�,
	// �Ǽ��� ��, �����÷ο찡 �߻��ϸ� infinity��� ���� ��µ˴ϴ�.
#pragma endregion

#pragma region ����÷ο�
	// Ư���� �ڷ����� ǥ���� �� �ִ� �ּڰ��� ����
	// �� �Ѿ ������ �����ϴ� �����Դϴ�.

	// char alphabet = -130;

	// printf("alphabet ������ �� : %d\n", alphabet);

	// ����÷ο�� ��ȣ ���� �ڷ������� �Ȱ��� �߻�
	// �ϸ�, �Ǽ��� �� ����÷ο찡 �߻��ϸ� 0�̶�� ���� ��µ˴ϴ�.
#pragma endregion

#pragma region ����Ʈ ������
	// ��Ʈ�� ��ġ�� ������ �Ǵ� �������� Ư���� ����ŭ
	// �̵���Ű�� �������Դϴ�.

	// int x = 10;
	// int y = 12;

	// printf("x�� ���� 2�� �������� �̵��� ��� : %d\n", x << 2);
	// printf("y�� ���� 2�� ���������� �̵��� ��� : %d\n", y >> 2);

#pragma endregion

#pragma region ��� ������

	/*// ���� + ����

	int x = 10;
	int y = 5;

	const int a = 20;
	const int b = 15;

	int result1; // ���� + ����
	int result2; // ���ͷ� ��� - ����
	int result3; // �ɺ��� ��� * ���ͷ� ���
	int result4; // ���ͷ� ��� / ���ͷ� ���
	int result5; // �ɺ��� ��� % �ɺ��� ���

	result1 = x + y;
	result2 = y - x;
	result3 = a * y;
	result4 = x / y;
	result5 = a % b;

	printf("result1 �� ���� ��� : %d\n", result1);
	printf("result2 �� ���� ��� : %d\n", result2);
	printf("result3 �� ���� ��� : %d\n", result3);
	printf("result4 �� ���� ��� : %d\n", result4);
	printf("result5 �� ���� ��� : %d\n", result5); // <- by YG

/*--------------------------------------------------------------*/

	/*int data = 10;
	const int constant = 10;

	int result1 = data + data;
	int result2 = 15 - data;
	int result3 = constant * 5;
	int result4 = 15 / 15;
	int result5 = constant * constant;

	printf("result1 ������ �� : %d\n", result1);
	printf("result2 ������ �� : %d\n", result2);
	printf("result3 ������ �� : %d\n", result3);
	printf("result4 ������ �� : %d\n", result4);
	printf("result5 ������ �� : %d\n", result5); // <- KGS_T */

#pragma endregion

#pragma region ��ȣ ���� �ڷ���

	/*unsigned short mineral = 65535; // short �ڷ����� ���� ������ 65534������ unsigned�� ����ϸ� ������ �� ��� ������.
	unsigned int gas = -1;

	printf("mineral ������ �� : %u\n", mineral);

	printf("gas ������ �� : %u\n", gas);
	printf("gas ������ �� : %d\n", gas);*/
#pragma endregion
}