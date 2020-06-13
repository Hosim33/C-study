#include <iostream> 
#include <string>
using namespace std;
int a, b; //a는 메뉴번호를 받아주는 변수이고 b는 구매할 수량을 받아주는 변수이다. 둘 다 전역변수이다.

class VendingMachine
{
private:
	string name;
	int price;
	int total = 0;
public:
	VendingMachine() {}; //생성자 
	void purchase(double v1); //총금액, 지폐입력, 거스름돈 출력
	void menu(); //처음 메뉴
	string getName(); //이름 받아줌
	double getPrice(); //가격 받아줌
	double getTotal(); //합계
	double newprice(); //가격만 반환해주는 함수
	void setName(string n); //이름 수정
	void setPrice(int p); //가격 수정
	void setTotal(int t);//합계 수정
	void newmenu(); //새로운 메뉴
};
double VendingMachine::newprice()
{
	return price;
}

void VendingMachine::newmenu() {
	cout << "====SWING 자판기====" << endl;
	cout << "1. 코카콜라 : 1500원" << endl;
	cout << "2. 비타500 : 900원" << endl;
	cout << "3. 파워에이드 : 2000원" << endl;
	cout << "4." << name << ":" << price << "원" << endl;
	cout << "5.계산" << endl;
	cout << "번호를 선택해주세요 : ";
	cin >> a;

}
void VendingMachine::purchase(double v1) {
	cout << "총금액 : " << v1 << endl;
	cout << "지폐를 입력하세요 : ";
	while (true)
	{
		int paper; //지폐 입력받는 변수
		int tr; //거스름돈 변수
		cin >> paper;
		tr = paper - v1;
		if (paper < v1)
			cout << "금액이 부족합니다. 다시 넣어주세요.";
		else if (paper == v1) {
			cout << "거스름돈이 없습니다. 안녕히가세요";
			break;
		}
		else if (paper > v1) {
			if (tr % 100 == 0) {
				cout << "거스름돈 입니다." << endl;
				cout << "500원 :" << tr / 500 << "개" << endl;
				cout << "100원 :" << tr % 500 / 100 << "개" << endl;
				cout << "안녕히가세요.";
				break;
			}
			else {
				cout << "거스름돈은 500원과 100원만 가능합니다." << endl;
				cout << "500원 :" << tr / 500 << "개" << endl;
				cout << "100원 :" << tr % 500 / 100 << "개" << endl;
				cout << "안녕히가세요.";
				break;
			}
		}
	}

}
void VendingMachine::menu()
{
	cout << "====SWING 자판기====" << endl;
	cout << "1. 코카콜라 : 1500원" << endl;
	cout << "2. 비타500 : 900원" << endl;
	cout << "3. 파워에이드 : 2000원" << endl;
	cout << "4. 준비중" << endl;
	cout << "5.계산" << endl;

}
void VendingMachine::setName(string n)
{
	name = n;
}
void VendingMachine::setPrice(int p)
{
	price = p;
}
void VendingMachine::setTotal(int t)
{
	total += t;

}
double VendingMachine::getTotal()
{
	return total;
}
string VendingMachine::getName()
{
	cout << "추가할 음료 이름을 입력해주세요 : ";
	cin >> name;
	return name;
}
double VendingMachine::getPrice()
{
	cout << "판매할 가격을 입력하세요 : ";
	cin >> price;
	return price;
}



int main()
{
	VendingMachine drink;
	VendingMachine* p; //객체 포인터 선언
	p = &drink;
	drink.menu();
	p->setName(drink.getName()); //객체 포인터로 음료수 이름에 접근
	p->setPrice(drink.getPrice()); //객체 포인터로 가격에 접근
	while (1) {
		drink.newmenu();
		switch (a) {
		case 1:
			cout << "구매할 수량을 입력해주세요. : ";
			cin >> b;
			(*p).setTotal(b * 1500); //객체 포인터로 합계 저장해줌
			break;
		case 2:
			cout << "구매할 수량을 입력해주세요. : ";
			cin >> b;
			(*p).setTotal(b * 900);
			break;
		case 3:
			cout << "구매할 수량을 입력해주세요. : ";
			cin >> b;
			(*p).setTotal(b * 2000);
			break;
		case 4:
			cout << "구매할 수량을 입력해주세요. : ";
			cin >> b;
			(*p).setTotal(b * drink.newprice());
			break;
		case 5:
			break;

		}
		if (a == 5) //5일 때 완전히 탈출하기 위해서 넣은 코드
			break;

	}
	if (a == 5)
		cout << "계산 중입니다. 기다려주세요 . . ." << endl << endl;
	drink.purchase(drink.getTotal());
}