#include <stdio.h>
#include <math.h>

struct GameObject
{
	char grade;
	double attack;
	double defense;
	int health;

	// ����ü ũ���� ��� ��� ������ ������ ���� �޸���
	// ũ�Ⱑ �ٸ��� ������ �� ������, ����ü ũ�⸦ �����ϴ�
	// ���´� �⺻ �ڷ������θ� �����Ǿ� �ֽ��ϴ�.
};

void main()
{
#pragma region ����ü
	// ���� ���� ������ �ϳ��� �������� ����ȭ�� ����
	// �ϳ��� ��ü�� �����ϴ� ���Դϴ�.
	
	// struct GameObject gameObject;
	// 
	// gameObject.grade = 'A';
	// gameObject.health = 75;
	// gameObject.attack = 5.5f;
	// gameObject.defense = 1.5f;
	// 
	// printf("Grade : %c\nHealth = %d\nAttack : %f\nDefense : %f\n", gameObject.grade, gameObject.health, gameObject.attack, gameObject.defense);

	// ����ü�� �����ϱ� ���� ����ü�� �޸� ������
	// �������� �����Ƿ�, ����ü ���ο� �ִ� �����͸�
	// �ʱ�ȭ�� �� �����ϴ�.
#pragma endregion

#pragma region ����Ʈ �е�
	// ��� ������ �޸𸮿��� CPU�� ���� �� �� ����
	// ���� �� �ֵ���, �����Ϸ��� ���������� ��Ͽ�
	// ���߾� ����Ʈ�� �е����ִ� ����ȭ �۾��Դϴ�.

	// struct GameObject object = { 'C', 30, 3.25 };
	// 
	// printf("GameObject�� ũ�� : %d\n", sizeof(object));

	// ����ü�� ũ��� ����ü�� �����ϴ� ��� �߿�
	// ũ�Ⱑ ���� ū �ڷ����� ����� �ǵ��� �����մϴ�.
#pragma endregion

#pragma region �� �� ������ �Ÿ�

	// printf("100�� ������ : %lf\n", sqrt(100)); // <- ������
	// 
	// printf("10��: %lf\n", pow(10, 2));

	int character1, monster1, character2, monster2;
	double distance;

	distance = sqrt(pow(character2 - character1, 2) + pow(monster2 - monster1, 2));

	if (distance = 3.0f)
	{
		printf("���� ����");
	}
	else if (distance != 3.0f)
	{
		printf("���� ���� ����");
	}
	

	

#pragma endregion


	return 0;
}