
#include <stdio.h>
#include <string>
#include "Calc.h"

// 함수의 선언
int Add(int a, int b);

#define MAX 100

// 매크로 함수
#define MY_ADD(a, b) (a + b)

int main()
{
#pragma region 매크로
	//int i = MY_ADD(10, 20);
	int i = (10 + 20);


#pragma endregion



#pragma region 클래스


	int a = 10;

	int* pA = &a;

	*pA = 20;

	int b = *pA;


	// 정적으로 만드는 경우
	//Calc c;
	//int result = c.Add(10, 20);

	// 동적으로 만드는 경우
	Calc* pC = new Calc();
	int result = pC->Add(10, 29);
	printf("%d", result);

	delete pC;

#pragma endregion



#pragma region 함수

	//// 함수를 호출 (Call)
	//int result = Add(10, 20);
	//printf("%d", result);

	//// 함수의 정의/구현
	////반환자료형 함수이름(매개변수, 매개변수)
	////{
	////	int result = 0;
	////	return result;
	////}

#pragma endregion

	//int 정수형 : -10, 0, 29
	//float 실수형 : -2.3f  0.0f  4.5f
	//bool 논리형 : 참/거짓 true/false
	//string 문자열 : "안녕"

#pragma region 자료형과 변수
	//자료형 변수이름;
	//int a;   // 변수 선언
	//a = 10; // 변수 a에 10을 대입했다.

	//int b = 10; // 변수 초기화

	//std::string str = "Hello World!";

	//// 헬로월드
	//printf(str.c_str());


#pragma endregion

#pragma region 조건문
	//int number = 100;
	// 조건문
	// 만약 number가 5보다 작으면 ~~
	// 그렇지않고 number 20보다 작으면 ~~~
	// 이도저도 아니라면 ~~~
	//bool isGood = false;

	//isGood = !isGood;

	////  만약 number가 10이하거나 100 이상이라면 참이다.
	//if (number <= 10 || number >= 100)
	//{

	//}
	//if (number < 5)	// 5보다 작은가?
	//{
	//	printf("11111111111");
	//}
	//else if (number>=5 && number < 20)	// 5이상이고 20보다 작은가?
	//{
	//	printf("22222222222");
	//}
	//else
	//{
	//	printf("33333333333");
	//}
#pragma endregion

#pragma region 반복문

	//for (초기값(1) ; 조건식(2) ; 증감문(3) )
	//{
	//	// TO DO:
	//	(4)
	//}
	//1 -> 2 -> 4 -> 3 -> 2 -> 4 -> 3 -> 2

	// 1부터 10까지 수를 모두 더해서 화면에 출력하세요.
	//int result = 0;
	//for (int i = 1; i <= 10; i++)
	//{
	//	result = result + i;
	//}
	//printf("%d\n", result);

	// 1부터 10까지 짝수만 출력하세요.
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

// 함수의 정의/구현
int Add(int a, int b)
{
	return a + b;
}