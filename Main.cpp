
#include <stdio.h>
#include <string>
#include "Calc.h"

// �Լ��� ����
int Add(int a, int b);

#define MAX 100

// ��ũ�� �Լ�
#define MY_ADD(a, b) (a + b)

int main()
{
#pragma region ��ũ��
	//int i = MY_ADD(10, 20);
	int i = (10 + 20);


#pragma endregion



#pragma region Ŭ����


	int a = 10;

	int* pA = &a;

	*pA = 20;

	int b = *pA;


	// �������� ����� ���
	//Calc c;
	//int result = c.Add(10, 20);

	// �������� ����� ���
	Calc* pC = new Calc();
	int result = pC->Add(10, 29);
	printf("%d", result);

	delete pC;

#pragma endregion



#pragma region �Լ�

	//// �Լ��� ȣ�� (Call)
	//int result = Add(10, 20);
	//printf("%d", result);

	//// �Լ��� ����/����
	////��ȯ�ڷ��� �Լ��̸�(�Ű�����, �Ű�����)
	////{
	////	int result = 0;
	////	return result;
	////}

#pragma endregion

	//int ������ : -10, 0, 29
	//float �Ǽ��� : -2.3f  0.0f  4.5f
	//bool ���� : ��/���� true/false
	//string ���ڿ� : "�ȳ�"

#pragma region �ڷ����� ����
	//�ڷ��� �����̸�;
	//int a;   // ���� ����
	//a = 10; // ���� a�� 10�� �����ߴ�.

	//int b = 10; // ���� �ʱ�ȭ

	//std::string str = "Hello World!";

	//// ��ο���
	//printf(str.c_str());


#pragma endregion

#pragma region ���ǹ�
	//int number = 100;
	// ���ǹ�
	// ���� number�� 5���� ������ ~~
	// �׷����ʰ� number 20���� ������ ~~~
	// �̵����� �ƴ϶�� ~~~
	//bool isGood = false;

	//isGood = !isGood;

	////  ���� number�� 10���ϰų� 100 �̻��̶�� ���̴�.
	//if (number <= 10 || number >= 100)
	//{

	//}
	//if (number < 5)	// 5���� ������?
	//{
	//	printf("11111111111");
	//}
	//else if (number>=5 && number < 20)	// 5�̻��̰� 20���� ������?
	//{
	//	printf("22222222222");
	//}
	//else
	//{
	//	printf("33333333333");
	//}
#pragma endregion

#pragma region �ݺ���

	//for (�ʱⰪ(1) ; ���ǽ�(2) ; ������(3) )
	//{
	//	// TO DO:
	//	(4)
	//}
	//1 -> 2 -> 4 -> 3 -> 2 -> 4 -> 3 -> 2

	// 1���� 10���� ���� ��� ���ؼ� ȭ�鿡 ����ϼ���.
	//int result = 0;
	//for (int i = 1; i <= 10; i++)
	//{
	//	result = result + i;
	//}
	//printf("%d\n", result);

	// 1���� 10���� ¦���� ����ϼ���.
	/*int num = 551225 / 10000;
	int a = 11;
	int r = a % 2;
	for (int i = 1; i <= 10; i++)
	{
		if (i % 2 == 0)
		{
			printf("%d\n", i);
		}

	}*/

#pragma endregion




	return 0;
}

// �Լ��� ����/����
int Add(int a, int b)
{
	return a + b;
}