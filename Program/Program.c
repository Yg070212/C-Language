#include <stdio.h> 

void main()
{
#pragma region �ּ� ������
	// ������ �ּ� ���� ��ȯ�ϴ� �������Դϴ�.
	
	// int data = 10;
	// 
	// printf("data ������ �ּ� : %p", &data);

	// �������� �ּ� ���� �ش� �����Ͱ� ����� �޸�
	// �� ���� �ּҸ� �ǹ��ϸ�, �޸��� ������ 1byte
	// �� ũ��� ������ ǥ���մϴ�.
#pragma endregion

#pragma region scanf �Լ�
	// ǥ�� �Է� �Լ���, ���� ������ �����͸� �پ���
	// ���Ŀ� ���߾� �Է����ִ� �Լ��Դϴ�.

	// int score = 0;

	// ǥ�� �Է� �Լ��� �Է��� ������ ������ ����
	// �۾����� �Ѿ �� �����ϴ�.
	// scanf_s("%d", &score);

	// ���۴� �����Ͱ� �̵��� �� �ӽ÷� ����Ǵ� �����̸�,
	// ���� �����ڿ� ���� �Է��� �� �ִ� �������� ������ �����˴ϴ�.
	// printf("score ������ �� : %d\n", score);

	// ǥ�� �Է� �Լ��� �����͸� �Է��ϰ� �Ǹ�
	// ���ۿ� �����͸� �����Ͽ��ٰ� �Է��ϴ� ����
	// ���� ���� ������ ���α׷��� �����մϴ�.
#pragma endregion

#pragma region Star

	// int input = 0;
	// 
	// scanf_s("%d", &input);
	// 
	// for (int i = 0; i < input; i++)
	// {
	// 	printf("��", i);
	// 	printf("\n");
	// 	for (int j = 0; j <= i; j++)
	// 	{
	// 		printf("��", j);
	// 	}
	// }

#pragma endregion

#pragma region ������
	// �޸��� �ּ� ���� ������ �� �ִ� �����Դϴ�.

	// int x = 10; // <- ������ �ּҰ�
	// 
	// int* pointer = &x; // <- ������ ���� ����, x�� ���� �ּҸ� �־����.
	// 
	// *pointer = 99; // <- ������
	// 
	// printf("x�� ���� �� : %d\n", x);
	// printf("x�� �ּ� �� : %p\n", &x);
	// printf("pointer ������ �� : %p\n", pointer);
	// printf("pointer ������ �ּ� �� : %p\n", &pointer);
	// 
	// printf("\n");
	// 
	// // ������ ������ �ڽ��� �޸� ������ ������ ������,
	// // ������ ������ ������ �ּҸ� �����ϰ� �Ǹ� �ش�
	// // ������ ���� �ּҸ� ����Ű�� �˴ϴ�.
	// 
	// float health = 100.0f;
	// 
	// pointer = &health;
	// 
	// *pointer = 15.5f;
	// 
	// printf("health ������ �� : %f\n", &health);
	// 
	// // ������ ������ �����ϱ� ���� �ּ� ���� ������ ������
	// // �ڷ����� ������ ������ �ڷ����� ��ġ�ؾ� �մϴ�.
	// 
	// printf("������ ������ ũ�� : %d\n", sizeof(pointer));

	// ������ ������ ũ��� �߾� ó�� ��ġ�� �� ���� ó���� ��
	// �ִ� ũ��� ��������, �� ���� ó���� �� �ִ� ũ���
	// � ü���� ���� ũ�Ⱑ �����˴ϴ�.

#pragma endregion

#pragma region ���� ������
	// �ڷ����� �������� ���� ���·� ��� �ڷ�����
	// ������ �� �ִ� �������Դϴ�.
	
	void* p = NULL;

	char character = 'A';
	int integer = 10;
	float decimal = 5.5f;

	p = &character;
	*(char*) p = 'B';
	printf("character�� �ּ� �� : %c\n", character);

	p = &integer;
	*(int*) p = 15;
	printf("integer�� �ּ� �� : %d\n", integer);

	p = &decimal;
	*(float*) p = 3.25f;
	printf("decimal�� �ּ� �� : %f\n", decimal);

	// ���� �����ʹ� �޸� �ּҿ� �����ؼ� ����
	// ������ �� �����ϴ�.



#pragma endregion

}