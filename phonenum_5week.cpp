#include <iostream>
using namespace std;

#include "phonenum.h"
void Phonenum::addPhone() { //처음에 연락처 등록하는 부분
	cout << "--- swing 전화번호부 ---" << endl;
	cout << "이름을 입력해 주세요 >>";
	cin >> name;
	cout << "전화번호를 입력해 주세요 >>";
	cin >> num;
}
void Phonenum::editPhone() { //연락처 수정하는 부분
	string name2;
	cout << "이름을 입력해 주세요 >> ";
	do
	{
		cin >> name2;
		if (name2 == name)
		{
			cout << "변경할 전화번호를 입력해 주세요 >> ";
			cin >> num;
		}
		else
		{
			cout << "연락처가 존재하지 않습니다. 다시 입력해주세요 >> ";
		}
	} while (name != name2);
}
string Phonenum::getPnum() { //전화번호 불러오는 함수
	return num;
}
string Phonenum::getName() { //이름 불러오는 함수
	return name;
}