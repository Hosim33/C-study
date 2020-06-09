#include <iostream>
using namespace std;

#include "phonenum.h"

int a; //메뉴에서 번호 입력받을 전역변수
void menu() //메뉴 함수
{
	cout << endl << "1. 최신 등록 전화번호 조회" << endl;
	cout << "2. 최신 등록 전화번호 수정" << endl;
	cout << "3. 종료 >>";
	cin >> a;
}

int main() //메인 함수 시작
{
	Phonenum people; //people 객체 선언
	people.addPhone();
	while (1) { //메뉴창 무한루프 반복문으로 계속 출력될 수 있게함
		menu();
		switch (a) {
		case 1:
			cout << people.getName();
			cout << "::";
			cout << people.getPnum() << endl;
			break;
		case 2:
			cout << endl;
			people.editPhone();
			break;
		case 3:
			break;
		}
		if (a == 3) //while문 탈출
			break;
	}
}