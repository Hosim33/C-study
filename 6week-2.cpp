#include <iostream>
#include <string>
using namespace std;

class PhoneBook {
private:
	string number; //전화번호
	string name;   //이름
public:
	PhoneBook();   //생성자
	void setPnum(string number);  //전화번호 저장
	void setName(string name);    //이름 저장
	void addPhone(string name, string number);   //이름과 전화번호 저장
	string getPnum();    //전화번호 가져오기
	string getName();    //이름 가져오기
	void editPnum(string number);
};

PhoneBook::PhoneBook() {}
void PhoneBook::setPnum(string number) {
	this->number = number;
}
void PhoneBook::editPnum(string number) {

	this->number.replace(0, 13, number); //전화번호 수정하는 코드
}
void PhoneBook::setName(string name) {
	this->name = name;
}

void PhoneBook::addPhone(string name, string number) {
	this->number = number;
	this->name = name;
}

string PhoneBook::getPnum() {
	return number;
}

string PhoneBook::getName() {
	return name;
}

class PhoneBookManager {
private: 
	PhoneBook* phoneB;  // 객체 배열 생성을 위한 선언 
	int size;           // 객체 배열의 크기
public: 
	PhoneBookManager(int num);  // 생성자 – PhoneBook으로 객체 배열 생성 
	void showAll();          // 전화번호부 목록 보기 
	void searchPnum();    // 전화번호 찾기 
	void addPnum();       // 전화번호 객체 추가 생성 (배열의 원소 개수가 +1되야 함) 
	void editPnum();       // 전화번호 수정
};
PhoneBookManager::PhoneBookManager(int num) {

	string name, number;
	size = num;
	PhoneBook* phoneB = new PhoneBook[size];  //size 크기의 객체 배열 동적 생성

	for (int i = 0; i < num; i++) {
		cout << endl << i + 1 << "번째 사람의 이름을 입력해주세요 >> ";
		cin >> name;
		phoneB[i].setName(name);
		cout << i + 1 << "번째 사람의 전화번호를 입력해주세요 >> ";
		cin >> number;
		phoneB[i].setPnum(number);

	};
}
void PhoneBookManager::showAll() {
	cout << endl << endl;
    for (int i = 0; i < size; i++)   // 이름과 전화번호 반복 출력
	{
        cout << i + 1 << ". " << phoneB[i].getName();  
        cout << "::" << phoneB[i].getPnum() << endl;    
    }
}
void PhoneBookManager::searchPnum() {
	string f_name; //f_name은 찾을 사람 이름 입력 받는 변수
	int ok=50;  //ok는 전화번호부에 그 이름 있을 때 변경되는 값
	cout << "누구의 번호를 검색하겠습니까? >> ";
	cin >> f_name;

	for (int i = 0; i < size; i++) {
		if (f_name == phoneB[i].getName()) {
			ok = i;
			cout << phoneB[i].getName()<<"님의 전화번호 : "<< phoneB[i].getPnum() << endl;
		}
	}
		if (ok==50)
			cout << "연락처가 존재하지 않습니다." << endl;

}
void PhoneBookManager::addPnum() {

	string p_name, p_num; //추가할 사람 이름과 번호 저장
	cout << endl << "이름을 입력해주세요 >> ";
	cin >> p_name;
	cout << endl << "전화번호를 입력해주세요 >>";
	cin >> p_num;

	PhoneBook* tmp = new PhoneBook[size + 1]; //객체 배열  tmp 생성

	for (int i = 0; i < size; i++)
		tmp[i] = phoneB[i];   //tmp에 phoneB값들을 다 옮겨줍니다.

	delete[] phoneB; //phoneB 메모리 반납
	size++;

	phoneB = new PhoneBook[size];
	for (int i = 0; i < size; i++)
		phoneB[i] = tmp[i];            //tmp값을 다시 phoneB로 옮겨줍니다.

	phoneB[size - 1].addPhone(p_name, p_num);


	cout << "전화번호가 추가되었습니다.";
	delete[] tmp;       //tmp메모리 반납
}
void PhoneBookManager::editPnum() {
	int ok=50; //수정할 사람의 인덱스 저장하는 변수
	string e_name, e_num; //수정할 사람 이름과 번호 입력받는 변수
	cout << "누구의 번호를 수정하겠습니까? >> ";
	cin >> e_name;

	for (int i = 0; i < size; i++)
	{
		if (e_name == phoneB[i].getName()) {
			ok = i;
			cout << "변경할 번호를 입력해주세요 >> ";
			cin >> e_num;
			phoneB[ok].editPnum(e_num);
		}
	}
	cout << "전화번호가 변경되었습니다.";
}

int main() {
	int num,select=0;
	cout << " --- SWING 전화번호부 --- " << endl;
	cout << "저장할 전화번호의 수를 입력하세요 >> ";
	cin >> num;
	PhoneBookManager mem(num);
	while (select != 5)
	{
		cout << " --- SWING 전화번호부 --- " << endl;
		cout << "1. 전화번호부 보기" << endl;
		cout << "2. 전화번호 검색" << endl;
		cout << "3. 전화번호 추가하기" << endl;
		cout << "4. 전화번호 수정하기" << endl;
		cout << "5. 종료" << endl;
		cout << "번호를 입력해주세요 >> ";
		cin >> select;

		switch (select)
		{
		case 1:
			mem.showAll();
			break;
		case 2:
			mem.searchPnum();
			break;
		case 3:
			mem.addPnum();
			break;
		case 4:
			mem.editPnum();
			break;
		case 5:
			cout << endl << endl << "프로그램을 종료합니다." << endl;
			break;
		defalt:
			cout << "잘못 입력하셨습니다.";
			
		}
	}
}