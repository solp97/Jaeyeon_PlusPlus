﻿// KGA_0412.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	/*

	6. 논리 연산자
	   왼쪽 항과 오른쪽 항의 값을 각각 참과 거짓으로 연산해서
	   두 값을 비교해서 참과 거짓을 반환하는 연산자

	   && : 논리곱(AND)
	   a && b : a의 결과값이 참'이고' b의 결과값이 참'이면' 1을 반환

	   || : 논리합(OR)
	   a || b : a의 결과값이 참'이거나' b의 결과값이 참이면 1을 반환

	   ! : 논리부정(NOT)
	   !a : a의 결과값이 참이면 거짓, 거짓이면 참으로 반환


	7. 삼항연산자

	   a ? b : c;

	   a의 결과값이 참이면 b 실행문이 동작, 거짓이면 c실행문이 동작.

	   */

	   // 난수 (랜덤값)
	   /*

	   rand(); 0~32767 사이의 랜덤한 값이 반환된다. 4byte
	   함수 내부에 seed값이 있어서 이 값에 의해서 리턴값이 정해진다.
	   기본적으로 seed : 1로 세팅되어 있다.


	   srand(time(NULL));


	   */






	   //cout << !1 << endl;  //0
	   //cout << !0 << endl;  //1
	   //(10 < 5) ? cout << "10이 5보자 크다." : cout << "10이 5보다 작다" << endl;
	   //제어문		데이터(타입 / 연산자 / <제어구조>
	   /*
	   1. 조건문 : 특정 조건에 따라서 실행문을 실행할지 안할지 제어 : if / switch
	   2. 반복문 : 특정 조건에 따라서 실행문을 일정 횟수만큼 반복 실행 제어

	   조건문

	   1_1. if 문
		   if (조건식1)
		   {

		   실행문1;

		   }

		   else if (조건식2)
		   {

		   실행문 1;


		   }

		   else
		   {


		   실행문 2;


		   }

	   */

		/*
		1_2 switch

		{
			case 정수:

				실행문

			break;

			case 정수2:

				실행문2

			break;

			default; //해당하는 정수값이 없을 때

				실행문 3

			break;

		}

		*/

		/*
		반복문
		2_1 while (조건식)
		{
		 실행문;
		 조건식을 바꾸는 실행문;
		 break;

		}


		if (조건식)
			{
				
			break;
			}	

		do-while문

		do
		{
			실행문;

		}
		
		while (조건식);
		
		
		
		
		*/

		/*
		2_2 For문

		for ((1)초기식; (2)조건식; (3)증감식;)
		{

			(4)실행문;

		}
		
		(1) -> (2) -> (4) -> (3) -> (2) -> (4) -> (3) .... 조건식의 결과같이 0(False)이 나올 때까지
		
		
		
		
		
		
		*/


	   /*

   실습 1. 3 ~ 7 사이의 랜덤한 숫자를 출력하는 프로그램을 작성하자.

   실습 2. 각자 작은 값과 큰 값을 입력 받아서, 그 사이의 임의의 값을 출력하는 프로그램을 작성하자

   실습 3. 프로그램을 실행하면 내부적으로 1 ~ 10 사이의 숫자가 정답으로 정해진다. 유저가 1~10 사이의 숫자를 입력하면 맞으면 true, 틀리면 false를 출력



   */
//   srand(time(0));
//   int randNum2 = (rand() % 9) + 1;
//
//   /*int randNum = (rand() % 5) + 3;
//   int Minvalue = 0;
//   int Maxvalue = 0;
//   int WhatNum = 0;
// 
//
//   cout << "3~7 사이의 랜덤한 값 = \n" << randNum << endl;
//   cout << "가장 작은값: ";
//   cin >> Minvalue;
//   cout << "가장 큰값: ";
//   cin >> Maxvalue;
//   int temp = Minvalue ;
//   Minvalue = Maxvalue > Minvalue ? Minvalue : Maxvalue;
//   Maxvalue = Maxvalue > temp ? temp : Maxvalue;
//
//   cout <<  "작은값과 큰값의 랜덤 값:" << (rand() % (Maxvalue - Minvalue +1)) + Minvalue;
//
//   cout << "1~10 아무숫자 입력:  ";
//   cin >> WhatNum;
//   cout << boolalpha <<(WhatNum == randNum2);*/
//
//
//   //조건문 실습1.
//   /*정수를 하나 입력 받아서
//   입력 받은 숫자가 10보다 크면 "입력된 숫자가 10보다 큽니다" 출력
//   10이하 9 초과이면 "9보다 큽니다" 출력
//   9이하 6초과 이면 "6보다 큽니다" 출력
//   그 이외에는 "6보다 작거나 같습니다" 출력
//
//
//   */
//
////	int input_Numb;
////	cout << "숫자를 입력: ";
////	cin >> input_Numb;
////
////
////	if (input_Numb > 10)
////	{
////		cout << "입력된 숫자가 10보다 큽니다" << endl;
////	}
////	
////
////else if ( input_Numb > 9)
////{
////cout << "입력된 숫자가 9보다 큽니다" << endl;
////
////}
////
////else if ( input_Numb > 6)
////{
////cout << "입력된 숫자가 6보다 큽니다" << endl;
////
////}
////
////else
////{
////cout << "입력된 숫자가 6보다 작거나 같습니다." << endl;
////
////}
//	 //switch문 실습
//	//당신의 고향은 어디입니까?
//	//1. 서울 2. 양평 3.광주 4. 대전 5.제주도
//
//	//안녕하세요 당신의 고향은 서울이군요.
//int chose_Num;
//
//cout << "당신의 고향은 어디입니까? \n " << "1. 서울 2. 양평 3. 광주 4. 대전 5. 제주도\n";
//cin >> chose_Num;
//
////switch (chose_Num)
////{
////case 1: 
////	cout << "안녕하세요 당신의 고향은 서울이군요";
////	break;
////case 2: 
////	cout << "안녕하세요 당신의 고향은 양평이군요";
////	break;
////case 3:
////	cout << "안녕하세요 당신의 고향은 광주이군요";
////	break;
////case 4:
////	cout << "안녕하세요 당신의 고향은 대전이군요";
////	break;
////case 5: 
////	cout << "안녕하수꽝, 혼저옵서예";
////	break;
////
////default:
////	cout << "5개중에 선택하세요";
////	break;
////}
//
//if (chose_Num == 1)
//{
//	cout << "안녕하세요 당신의 고향은 서울이군요";
//
// }
//else if (chose_Num == 2)
//{
//	cout << "안녕하세요 당신의 고향은 양평이군요";
//
//}
//else if (chose_Num == 3)
//{
//	cout << "안녕하세요 당신의 고향은 광주이군요";
//
//}
//else if (chose_Num == 4)
//{
//	cout << "안녕하세요 당신의 고향은 대전이군요";
//
//}
//
//else if (chose_Num == 5)
//{
//	cout << "안녕하수꽝, 혼저옵서예";
//
//}
//
//else
//
//cout << "5개중에 선택하세요";
//int a = 0;
//int b = 0;
//int c = 0;
//
//while (a < 10)
//{
//	cout << "Hi" << endl;
//	a++;
//
//}
//
//while (1)
//{
//	cout << "LOL" << endl;
//	b++;
//		if (b >= 10)
//		{
//			break;
//		}
//}
//
//do
//{
//
//	cout << "Good" << endl;
//	c++;
//
//	if (c >= 10)
//	{
//		break;
//
//	}
//}
//while (1);
//
//
////while 문을 이용하여 1~10정답을 맞출 때까지 반복되는 프로그램
//int inf_Num = 0;
//
//while (1)
//{
//	
//	cout << (inf_Num++) % 10 << "\n";
//	if (randNum2 == inf_Num )
//	{
//		
//		
//		
//		break;
//
//
//
//
//	}
//}
//
//
//for (int i = 0; i < 5; i++)
//{
//
//	cout << "Hello world" << endl;
//
//
//
//}

//실습 1. For 문을 이용하여  10부터 1까지

//실습 2. 100미만의 3의배수를 차례대로 출력되는 코드를 작성

//실습 3. 1000까지의 2의 승수를 구해라

//실습 4. 구구단

cout << "실습 1\n";

for (int i = 10; i > 0; i--)
{

	cout << i << endl;



}
cout << "실습 2\n";
for (int i = 3; i < 100; i= i+3)
{

	cout << i << endl;



}

cout << "실습 3\n";
for (int i = 1; i < 1000; i = i*2 )
{

	cout << i << endl;



}


cout << "\n실습 4\n";
for (int i = 1; i < 10; i = i++)
{

	cout << 2 << "x"<< i <<"=" << 2 * i << endl;



}


cout << "\n실습 5\n";
for (int i = 2; i < 10; i = i+=3)
{
	for (int j = 1; j < 10; j = j++)
	{
	
		for (int k = i; k < i + 3; k++)
		{



			cout << k << " x " << j << "  =  " << k * j << "  ";





		}

		cout << "\n";
	
	}
		
	cout << "\n";



}


}