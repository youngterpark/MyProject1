#include<stdio.h>
#include<time.h>
int main_condition(void)
{
	// 가위 0 바위 1 보 2
	//srand(time(NULL));
	//int i = rand() % 3; // 0 ~ 2 반환
	//if (i == 0)
	//{
	//	printf("가위");
	//}
	//else if (i == 1)
	//{
	//	printf("바위");
	//}
	//else if (i == 2)
	//{
	//	printf("보");
	//}
	//else
	//{
	//	printf("몰라요");
	//}

	//srand(time(NULL));
	//int i = rand() % 3; // 0 ~ 2 반환
	//switch (i)
	//{
	//case 0:printf("가위\n"); break;
	//case 1:printf("바위\n"); break;
	//case 2:printf("보\n"); break;
	//default:printf("몰라요\n"); break;
	//}

	/*int age;
	printf("몇살이세요?");
	scanf_s("%d", &age );
	switch (age)
	{
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:printf("초등학생입니다\n"); break;
	case 14:
	case 15:
	case 16:printf("중학생입니다\n"); break;
	case 17:
	case 18:
	case 19:printf("고등학생입니다\n"); break;
	default: printf("학생이 아닌가봐요\n"); break;
	}*/

	// Up and Down
	srand(time(NULL));
	int num = rand() % 100 + 1; // 1 ~ 100 사이의 숫자
	printf("숫자 : %d\n", num);
	int answer = 0; // 정답
	int chance = 5; // 기회
	while (chance > 0)
	{
		printf("남은 기회 %d 번\n", chance--);
		printf("숫자를 맞혀보세요 (1~100) :");
		scanf_s("%d", &answer);

		if (answer > num)
		{
			printf("DOWN ↓\n\n");
		}
		else if (answer < num)
		{
			printf("UP ↑\n\n");
		}
		else if (answer == num)
		{
			printf("정답입니다.\n\n");
			break;
		}
		else
		{
			printf("알 수 없는 오류가 발생했어요\n\n");
		}

	}
	return 0;
}