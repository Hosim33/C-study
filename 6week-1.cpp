#include <iostream>
#include <string>
using namespace std;
int num2,pw2; //menu 번호 입력 받는 변수와 비밀번호 확인용

class ATM {
private:
	string name; //계좌주 이름
	int pw; //계좌 비밀번호
	int money; //계좌 잔액

public:
	ATM();
	void Name(); 
	void Money();
	void deposit();   //입금 1
	void withdraw();           // 인출 2
	void send(string receiver, int sendMon);  // 이체 - 받음 3
	void receive(int receiveMon);  // 이체 - 보냄 3
	int getMoney();  // 얼마있는지 출력 4
	string getName(); // 이름 불러오기
	void menu();  //메인 화면 출력
	void pwinput(); //비밀번호 입력
	void pwcheck(); //가입 때 비밀번호 확인
	void pwcheck2(); //기타 비밀번호 확인
};
void ATM::Name() {
	cin >> name;
}

void ATM::Money() {
	cout << "입금할 금액을 입력해주세요 >> ";
	cin >> money;
}

void ATM::pwinput() {
	cout << "비밀번호를 입력해주세요 >> ";
	cin >> pw;
}

void ATM::pwcheck() {
	cout << "한번 더 입력해주세요 >> ";
	cin >> pw2;
	while (pw2 != pw) {
		cout << "비밀번호가 서로 다릅니다." << endl;
		cout << endl;
		cout << "비밀번호를 입력해주세요 >> ";
		cin >> pw;
		cout << "한번 더 입력해주세요 >> ";
		cin >> pw2;
	}
}
void ATM::pwcheck2() {
	cin >> pw2;
	while (pw2 != pw) {
		cout << "비밀 번호가 틀렸습니다." << endl;
		cout << "비밀 번호를 입력해 주세요 >>";
		cin >> pw2;
	}
}

ATM::ATM() { }

void ATM::menu() {
	cout << "1. 입금" << endl;
	cout << "2. 인출" << endl;
	cout << "3. 이체" << endl;
	cout << "4. 잔액 확인" << endl;
	cout << "5. 종료" << endl;
	cout << "번호를 선택해주세요 >>";
	cin >> num2;
}
void ATM::deposit() {
	int in;
	cout << "입금할 금액을 입력해주세요 >>";
	cin >> in;
	money += in;
	cout << "현재" << name << "님의 잔액은" << money << "원 입니다." << endl;
}
void ATM::withdraw() {
	int a;
	cout << "얼마를 인출하시겠습니까? >>";
	cin >> a;
	money = money - a;
    cout << "현재" << name << "님의 잔액은" << money << "원 입니다." << endl;
}

void ATM::send(string receiver, int sendMon) {
	money += sendMon;
	cout << "누구에게 보내겠습니까? >>";
	cout << "얼마를 보내겠습니까? >>";
}
void ATM::receive(int receiveMon) {
	money -= receiveMon;
	cout << "님께 <<을 보냈습니다.";
}
int ATM::getMoney() {
	return money;
	cout << " << 님의 현재 잔액은 << 원 입니다." << endl;
}
string ATM::getName() {
	return name;
}

int main()
{
	int num=0,i,point =0,j,sendMon;
	string who, who2;
	cout << "은행에 가입할 인원을 입력해주세요 >>";
	cin >> num;
	ATM* member = new ATM[num]; //new로 배열 동적 생성
	for (i = 0; i < num; i++) {
		cout << endl << i+1 << "번째 손님" << endl;
		cout << endl <<"성명을 적어주십시오 >> ";
		member[i].Name();
		member[i].pwinput();
		member[i].pwcheck();
		member[i].Money();
		cout << endl << endl;
	}
	do {
		cout << endl << " ---  SWING ATM  --- " << endl;
		cout << "성함을 입력해주세요 (종료라면 x를 입력해주세요) >> ";
		cin >> who;
		cout << endl;

		for (i = 0; i < num; i++) {
			if (who == member[i].getName()) {
				break;
			}
			point++;
		}

		if (point >= num && who != "x") {
			cout << "존재하지 않는 계좌주입니다." << endl;
			continue;
		}

		if (point < num) {
			do
			{
				cout << " ---  SWING ATM"<< member[point].getName() << "님  --- " << endl;
				member[point].menu();

				switch (num2)
				{
				case 1:
					member[point].deposit();
					break;
				case 2:
					member[point].withdraw();
					break;
				case 3:
					j = 0;
					cout << "누구에게 보내겠습니까? >>";
					cin >> who2;
					for (i = 0; i < num; i++) {
						if (who2 == member[i].getName()) {
							j++;
							break;
						}
					}
					cout << "비밀번호를 입력해주세요 >>";
					member[point].pwcheck2();

					if (j == 1) {
						cout << "얼마를 보내시겠습니까? >> ";
						cin >> sendMon;
						member[j].send(who2, sendMon);
						member[point].receive(sendMon);
					}
					break;
				case 4:
					cout << member[point].getName() << "님의 현재 잔액은" << member[point].getMoney() << "원 입니다." << endl;
					break;
				}
			} while (num2 != 5);
		}
		continue;
	} while (who != "x");
	cout << "ATM을 종료합니다.";
	
	delete[] member;
	return 0;
	
}