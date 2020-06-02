#include <iostream>
#include <string>
using namespace std;
int a; //메뉴에서 번호 입력받을 전역변수
class Phonenum {
public:
    void addPhone();
	void editPhone();
	string getPnum(); 
	string getName();
private:
	string name; //이름 저장하는 변수
	string num; //전화번호 저장하는 변수
};
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


void menu() //메뉴 함수
{
	cout << endl << "1. 최신 등록 전화번호 조회" << endl;
	cout << "2. 최신 등록 전화번호 수정" << endl;
	cout << "3. 종료 >>";
	cin >>a;
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