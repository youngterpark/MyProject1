#include<stdio.h>
#include<time.h>
int main_condition(void)
{
	// ���� 0 ���� 1 �� 2
	//srand(time(NULL));
	//int i = rand() % 3; // 0 ~ 2 ��ȯ
	//if (i == 0)
	//{
	//	printf("����");
	//}
	//else if (i == 1)
	//{
	//	printf("����");
	//}
	//else if (i == 2)
	//{
	//	printf("��");
	//}
	//else
	//{
	//	printf("�����");
	//}

	//srand(time(NULL));
	//int i = rand() % 3; // 0 ~ 2 ��ȯ
	//switch (i)
	//{
	//case 0:printf("����\n"); break;
	//case 1:printf("����\n"); break;
	//case 2:printf("��\n"); break;
	//default:printf("�����\n"); break;
	//}

	/*int age;
	printf("����̼���?");
	scanf_s("%d", &age );
	switch (age)
	{
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:printf("�ʵ��л��Դϴ�\n"); break;
	case 14:
	case 15:
	case 16:printf("���л��Դϴ�\n"); break;
	case 17:
	case 18:
	case 19:printf("����л��Դϴ�\n"); break;
	default: printf("�л��� �ƴѰ�����\n"); break;
	}*/

	// Up and Down
	srand(time(NULL));
	int num = rand() % 100 + 1; // 1 ~ 100 ������ ����
	printf("���� : %d\n", num);
	int answer = 0; // ����
	int chance = 5; // ��ȸ
	while (chance > 0)
	{
		printf("���� ��ȸ %d ��\n", chance--);
		printf("���ڸ� ���������� (1~100) :");
		scanf_s("%d", &answer);

		if (answer > num)
		{
			printf("DOWN ��\n\n");
		}
		else if (answer < num)
		{
			printf("UP ��\n\n");
		}
		else if (answer == num)
		{
			printf("�����Դϴ�.\n\n");
			break;
		}
		else
		{
			printf("�� �� ���� ������ �߻��߾��\n\n");
		}

	}
	return 0;
}