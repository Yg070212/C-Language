#include <stdio.h>
#include <math.h>
#include <stdlib.h>

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

struct Vector2
{
	float x;
	float y;
};

struct Node
{
	int data;
	struct Node* next;
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

	// struct Vector2 character = { 0, 0 };
	// struct Vector2 slime = { 1.75f, 1.25f };
	// 
	// double x = character.x - slime.x;
	// double y = character.y - slime.y;
	// 
	// double distance = sqrt(pow(x, 2) + pow(y, 2));
	// 
	// if (distance >= 3.0f)
	// {
	// 	printf("�̵� ����\n");
	// }
	// else if (distance < 3.0)
	// {
	// 	printf("���� ����\n");
	// }

	// printf("100�� ������ : %lf\n", sqrt(100));
	// printf("10��: %lf\n", pow(10, 2));

#pragma endregion

#pragma region �ڱ� ���� ����ü
	// ����ü ���ο� �ڱ� �ڽ��� �ڷ����� ��� ������
	// ������ �ִ� ����ü�Դϴ�.

	// struct Node* node1 = malloc(sizeof(struct Node));
	// struct Node* node2 = malloc(sizeof(struct Node));
	// struct Node* node3 = malloc(sizeof(struct Node));
	// 
	// node1->data = 10;
	// node2->data = 20;
	// node3->data = 30;
	// 
	// node1->next = node2;
	// node2->next = node3;
	// node3->next = NULL;
	// 
	// struct Node* currentNode = NULL;
	// 
	// currentNode = node1;
	// 
	// while (currentNode != NULL)
	// {
	// 	printf("%d ", currentNode->data);
	// 
	// 	currentNode = currentNode->next;
	// }

#pragma endregion

	return 0;
}