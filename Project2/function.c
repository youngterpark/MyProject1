#include <stdio.h>

// ����
void p(int num);

void fuction_without_return();
int function_with_return();
void function_without_params();
void function_with_params(int num1,int num2, int num3);
int apple(int total, int ate);

int add(int num, int num2);
int sub(int num, int num2);
int mul(int num, int num2);
int div(int num, int num2);

int main_function(void)
{
	// function
	// ����

	//int num = 2;
	////printf("num �� %d �Դϴ�.\n"); // 2
	//p(num);

	//// 2 + 3 ��?
	//num = num + 3; // num += 3;
	////printf("num �� %d �Դϴ�."); // 5
	//p(num);

	//// 5 - 1 ��?
	//num -= 1; // num = num - 1;
	////printf("num �� %d �Դϴ�."); // 4
	//p(num);

	//// 4 x 3 ��?
	//num *= 3;
	////printf("num �� %d �Դϴ�."); // 12
	//p(num);

	//// 12 / 6 ��?
	//num /= 6;
	////printf("num �� %d �Դϴ�."); // 2
	//p(num);

	// �Լ� ����
	// ��ȯ���� ���� �Լ�
	/*fuction_without_return();*/

	// ��ȯ���� �ִ� �Լ�
	/*int ret = function_with_return();
	p(ret);*/

	// �Ķ����(���ް�)�� ���� �Լ�
	/*function_without_params();*/

	// �Ķ����(���ް�)�� ���� �Լ�
	/*function_with_params(1, 2, 3);*/

	// �Ķ����(���ް�)�� �ް�, ��ȯ���� �����ִ� �Լ�
	//int ret = apple(5, 2); // 5���� ��� �߿��� 2���� �Ծ����
	//printf("���� ��� :%d\n",ret);
	//printf("��� %d �� �߿� %d �� ������ %d �� ���ƿ� ����\n", 10, 6, apple(10, 6));

	// ���� �Լ�
	int num = 2;
	num = add(num, 3);
	p(num);

	num = sub(num, 1);
	p(num);

	num = mul(num, 3);
	p(num);

	num = div(num, 6);
	p(num);




	return 0;
}

// ����
void p(int num)
{
	printf("num�� %d �Դϴ�.\n", num);
}

// ���ް� : 36
// �Լ� : �� + 4
// ��ȯ�� : ?

//��ȯ�� �Լ��̸�(���ް�) // ��ȯ���� �ʰڴ� = void. 0�̶� �ǹ̶� return 0;�̶� ���� ��, ��ȯ�� �Ǽ��� �ϰ� ������ double ���� return num+4;
//{
//
//}



void fuction_without_return()
{
	printf("��ȯ���� ���� �Լ��Դϴ�.\n");
}

int function_with_return()
{
	printf("��ȯ���� �ִ� �Լ��Դϴ�.\n");
	return 10;
}

void function_without_params()
{
	printf("���ް��� ���� �Լ��Դϴ�.\n");
}

void function_with_params(int num1, int num2, int num3)
{
	printf("���ް��� �ִ� �Լ��̸�, ���޹��� ���� %d, %d, %d �Դϴ�.\n", num1, num2, num3);
}

int apple(int total, int ate)
{
	printf("%d ���� ��� �߿��� %d���� ����� �Ծ����.\n", total, ate);
	return total - ate;
}

int add(int num, int num2)
{
	return num + num2;
}

int sub(int num, int num2)
{
	return num - num2;
}

int mul(int num, int num2)
{
	return num * num2;
}

int div(int num, int num2)
{
	return num / num2;
}