#include <stdio.h> 

void Function()
{
	printf("Function...\n");
}

int Compare(float x, float y)
{
	if (x < y)
	{
		return 1;
	}
	else if (x == y)
	{
		return 0;
	}
	else
	{
		return -1;
	}
}

void Position(int x, int y)
{
	printf("x�� �� : %d\n", x);
	printf("y�� �� : %d\n", y);
}

void Swap(int * left, int * right)
{
	int temporary = *left;

	*left = *right;

	*right = temporary;
}

inline void Process(float progress)
{
	printf("Progress : %f\n", progress);

	// �ζ��� �Լ��� ������ ������ Ȯ��Ǹ�, ������
	// �� �ζ��� �Լ��� �����ϴ��� ��Ȳ�� ����
	// �Ϲ� �Լ��� ��ȯ�Ǳ� �մϴ�.
}

void Recursive(int count)
{
	if (count > 0)
	{
		Recursive(count - 1);
	}
	else
	{
		return;
	}

	printf("Recursive Funion\n");
}

void main()
{
#pragma region �Լ�
	// �ϳ��� Ư���� ������ �۾��� �����ϱ� ����
	// ���������� ����� �ڵ��� �����Դϴ�.

	// Function();
	// 
	// Function();
	// 
	// Function();

	// �Լ��� ��� �ڷ����� ��ȯ�ϴ� ���� ���°�
	// ��ġ���� ������ ���ϴ� ���� ���� �� �����ϴ�.
#pragma endregion

#pragma region �Ű� ����
	// �Լ��� ���ǿ��� ���޹��� �μ��� �Լ� ���η�
	// �����ϱ� ���� ����ϴ� �����Դϴ�.

	// Position(5, 5);

	// �Ű� ������ �Լ� ���ο����� ������ �̷������,
	// �Լ��� ����Ǹ� �޸𸮿��� ������ϴ�.

	// printf("Compaer �Լ��� �� : %d\n", Compare(5.75f, 8.125f)); 

	// �ϳ��� �Լ��� ���� �ٸ� �ڷ����� �Ű� ������
	// �Բ� ������ �� ������, ���� ���� �Ű� ������
	// �����Ͽ� ����� �� �ֽ��ϴ�.
#pragma endregion

#pragma region �μ�
	// �Լ��� ȣ��� �� �Ű� ������ ������ ���޵Ǵ�
	// ���Դϴ�.

	// int a = 10;
	// int b = 20;
	// 
	// Swap(&a, &b);
	// 
	// printf("a�� �� : %d\n", a);
	// printf("b�� �� : %d\n", b);

	// �μ��� ��� �Լ��� �ִ� �Ű� ������ ���� ����
	// ������ �� �ִ� �μ��� ���� �����Ǹ�, ���� �����ϴ�
	// �μ��� ���� ���޹޴� �Ű� ������ �ڷ����� ���� ��ġ�ؾ� �մϴ�.
#pragma endregion

#pragma region �ζ��� �Լ�
	// �Լ��� ȣ���ϴ� ��� �Լ��� ȣ��Ǵ� ��ġ����
	// �Լ��� �ڵ带 �����Ͽ� �����ϴ� ����� �Լ��Դϴ�.

	// Process(46.7f);

	// �ζ��� �Լ��� �Լ��� ȣ���ϴ� ������ �����Ƿ� ó�� �ӵ���
	// ��������, �ζ��� �Լ��� ���� ����ϰ� �Ǹ� �Լ��� �ڵ尡
	// ����Ǳ� ������ ���� ������ ũ�Ⱑ Ŀ���� �˴ϴ�.
#pragma endregion

#pragma region ��� �Լ�
	// � �Լ����� �ڽ��� �ٽ� ȣ���Ͽ� �۾���
	// �����ϴ� �Լ��Դϴ�.

	// Recursive(5);

	// ��� �Լ��� �Լ��� ��� ȣ���ϱ� ������ ���� ����
	// �� �޸𸮰� ��� ���̰� �ǹǷ� ���� �����÷ο찡
	// �߻��ϰ� �˴ϴ�.
#pragma endregion

}