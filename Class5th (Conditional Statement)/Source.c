#include <stdio.h> 

#pragma region ��ó����
// ���α׷��� �����ϵǱ� ������ ���α׷��� ����
// ���� ó���ϴ� �����Դϴ�.

// ��ó����� �����Ϸ��� �ƴ� ����ó���⿡ ���ؼ�
// ó���Ǵ� �����̱� ������ ���ɹ� ���� ";"�� ������� �ʽ��ϴ�.
#pragma endregion

void main() {
#pragma region �Ǽ��� �����ϴ� ���

#pragma region ���� �Ҽ���
	// �Ҽ����� ��ġ�� �����Ͽ� �Ҽ����� ��ġ��
	// ��Ÿ���� ����Դϴ�.

	// ���� �Ҽ����� �����ο� �Ҽ����� ũ�Ⱑ �����Ƿ�
	// ǥ���� �� �ִ� ������ �����Ǿ� �ֽ��ϴ�.
#pragma endregion

#pragma region �ε� �Ҽ���
	// �Ҽ����� ��ġ�� �������� �ʰ� �Ҽ����� ��ġ��
	// ��Ÿ���� ����Դϴ�.

	// �����ο� �ִ� ��Ʈ �߿��� ���� ���ʿ� �ִ� ����
	// ǥ������ �ʽ��ϴ�.
#pragma endregion

#pragma region �Ǽ� ������ (10)������ (2)������ ��ȯ�ϴ� ����
	// 10���� �Ǽ� �κ��� 1.0�� �� ������ ��� 2�� ����
	// ���� ���� ����� ���� �κ��� ������ �Ʒ��� �������
	// �����մϴ�.

	// float packet = 3.125f;
	// float pi = 3.141592f;
	// 
	// printf("packet ������ �� : %f\n", packet);
	// printf("pi ������ �� : %.8f\n", pi);

	// ǥ�� ��� �Լ��� �Ҽ��� ����� �� 4byte ũ����
	// �Ǽ��� �ڷ����� �Ҽ��� ���� 6�ڸ������� ǥ���ϸ�,
	// 8byte ũ���� �Ǽ��� �ڷ����� �Ҽ��� ���� 15�ڸ������� ǥ��˴ϴ�.

#pragma endregion


#pragma endregion

#pragma region ���ǹ�
	// � ������ �־��� �� �ش� ���ǿ� ����
	// ������ �����ϵ��� �����ϴ� ���ɹ��Դϴ�.

#pragma region ���迬����
	// �� ���� �ǿ������� ���� ���Ͽ� �� �����
	// 0 �Ǵ� 1�̶�� ������ ��Ÿ���� �������Դϴ�.

	// int data1 = 10 > 5;
	// int data2 = 10 < 5;
	// int data3 = 10 >= 5;
	// int data4 = 10 <= 5;
	// int data5 = 10 == 5;
	// int data6 = 10 != 5;
	// 
	// printf("data1�� �� : %d\n", data1);
	// printf("data2�� �� : %d\n", data2);
	// printf("data3�� �� : %d\n", data3);
	// printf("data4�� �� : %d\n", data4);
	// printf("data5�� �� : %d\n", data5);
	// printf("data6�� �� : %d\n", data6);

	// ���� �����ڴ� ������ ���� �� 1 �̶�� ������ ��ȯ�Ǹ�,
	// ������ Ʋ�� ���� 0�̶�� ������ ��ȯ�˴ϴ�.
#pragma endregion

#pragma region if��
	// � Ư���� ������ ���Ͽ� ������ �´ٸ�
	// ����Ǵ� �����Դϴ�.

	// int health = 0;
	// 
	// if (health <= 0)
	// {
	// 	printf("GameObject Destroy\n");
	// }


#pragma endregion

#pragma region else if��
	// if���� ������ Ʋ�� �� else if���� ������
	// �´ٸ� ����Ǵ� ���ɹ��Դϴ�.

	// char poison = 'Y';
	// 
	// if (poison == 'Y')
	// {
	// 	printf("���� �ߵ� �Ǿ����ϴ�.\n");
	// }
	// else if(poison == 'N')
	// {
	// 	printf("���� �����Դϴ�.\n");
	// }

	// else if���� ���� ���� �����ϴ� ���� �����ϸ�,
	// if���� �������� ������ ����� �� �����ϴ�.
#pragma endregion

#pragma region else��
	// if���� else if���� ������ �� Ʋ����
	// ����Ǵ� ���ɹ��Դϴ�.

// char poison = 'A';
// 
// if (poison == 'Y')
// {
// 	printf("�÷��̾ �ߵ� ���� �Դϴ�.\n");
// }
// else if (poison == 'N')
// {
// 	printf("�÷��̾ ���� �����Դϴ�.\n");
// }
// else (poison == 'A');
// {
// 	printf("�÷��̾ �ߵ����� ���� ����Ͽ����ϴ�.\n");
// }

	// if���� ����� ��� ���ǹ��� ������ ���� ��
	// ���� ���� �ִ� ���ǹ��� ����˴ϴ�.
#pragma endregion

#pragma region Switch��
// � ����� ���� �� ������� ����Ǵ� ���ɹ��Դϴ�.

// int key = 'W';

#pragma region break��
// Ư���� �������� �б⸦ Ż���ϴ� ���

#pragma endregion


// switch (key)
// {
// 	// switch���� �ش� ������ �Ϸ�Ǿ��� ��, break
// 	// ���� ������ ������ �ؿ��ִ� case ������
// 	// ��� �����Ű�ٰ� �����մϴ�.
// 
// case 'W': printf("��");
// 	break;
// case 'A': printf("��");
// 	break;
// case 'S': printf("��"); 
// 	break;
// case 'D': printf("��");
// 	break;
// default: printf("Exception");
// 	break;
// }

// switch���� ��� ���ǿ� �ش��ϴ� ���� ���� ������
// ��ġ�� �̵��մϴ�.
#pragma endregion

#pragma region ���� ������

// int level = 99;
// int exp = 10000;
// 
// if (level >= 99 && exp >= 5000)
// {
// 	printf("������ �� �� �ֽ��ϴ�.\n");
// }

#pragma endregion

#pragma region AND ������
// int level = 99;
// int exp = 10000;
// 
// if (level >= 99 && exp >= 5000)
// {
// 	printf("������ �� �� �ֽ��ϴ�.\n");
// }
#pragma endregion

#pragma region OR ������

// int questA = 10;
// int questB = 0;
// 
// if (questA >= 10 || questB >= 10)
// {
// 	printf("Quest Clear\n");
// }

#pragma endregion

#pragma region NOT ������

// int state = 0;
// 
// if (!state)
// {
// 	printf("Game Start");
// }
#pragma endregion

#pragma endregion

}