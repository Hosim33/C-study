#include <iostream> 
#include <string>
using namespace std;
int a, b; //a�� �޴���ȣ�� �޾��ִ� �����̰� b�� ������ ������ �޾��ִ� �����̴�. �� �� ���������̴�.

class VendingMachine
{
private:
	string name;
	int price;
	int total = 0;
public:
	VendingMachine() {}; //������ 
	void purchase(double v1); //�ѱݾ�, �����Է�, �Ž����� ���
	void menu(); //ó�� �޴�
	string getName(); //�̸� �޾���
	double getPrice(); //���� �޾���
	double getTotal(); //�հ�
	double newprice(); //���ݸ� ��ȯ���ִ� �Լ�
	void setName(string n); //�̸� ����
	void setPrice(int p); //���� ����
	void setTotal(int t);//�հ� ����
	void newmenu(); //���ο� �޴�
};
double VendingMachine::newprice()
{
	return price;
}

void VendingMachine::newmenu() {
	cout << "====SWING ���Ǳ�====" << endl;
	cout << "1. ��ī�ݶ� : 1500��" << endl;
	cout << "2. ��Ÿ500 : 900��" << endl;
	cout << "3. �Ŀ����̵� : 2000��" << endl;
	cout << "4." << name << ":" << price << "��" << endl;
	cout << "5.���" << endl;
	cout << "��ȣ�� �������ּ��� : ";
	cin >> a;

}
void VendingMachine::purchase(double v1) {
	cout << "�ѱݾ� : " << v1 << endl;
	cout << "���� �Է��ϼ��� : ";
	while (true)
	{
		int paper; //���� �Է¹޴� ����
		int tr; //�Ž����� ����
		cin >> paper;
		tr = paper - v1;
		if (paper < v1)
			cout << "�ݾ��� �����մϴ�. �ٽ� �־��ּ���.";
		else if (paper == v1) {
			cout << "�Ž������� �����ϴ�. �ȳ���������";
			break;
		}
		else if (paper > v1) {
			if (tr % 100 == 0) {
				cout << "�Ž����� �Դϴ�." << endl;
				cout << "500�� :" << tr / 500 << "��" << endl;
				cout << "100�� :" << tr % 500 / 100 << "��" << endl;
				cout << "�ȳ���������.";
				break;
			}
			else {
				cout << "�Ž������� 500���� 100���� �����մϴ�." << endl;
				cout << "500�� :" << tr / 500 << "��" << endl;
				cout << "100�� :" << tr % 500 / 100 << "��" << endl;
				cout << "�ȳ���������.";
				break;
			}
		}
	}

}
void VendingMachine::menu()
{
	cout << "====SWING ���Ǳ�====" << endl;
	cout << "1. ��ī�ݶ� : 1500��" << endl;
	cout << "2. ��Ÿ500 : 900��" << endl;
	cout << "3. �Ŀ����̵� : 2000��" << endl;
	cout << "4. �غ���" << endl;
	cout << "5.���" << endl;

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
	cout << "�߰��� ���� �̸��� �Է����ּ��� : ";
	cin >> name;
	return name;
}
double VendingMachine::getPrice()
{
	cout << "�Ǹ��� ������ �Է��ϼ��� : ";
	cin >> price;
	return price;
}



int main()
{
	VendingMachine drink;
	VendingMachine* p; //��ü ������ ����
	p = &drink;
	drink.menu();
	p->setName(drink.getName()); //��ü �����ͷ� ����� �̸��� ����
	p->setPrice(drink.getPrice()); //��ü �����ͷ� ���ݿ� ����
	while (1) {
		drink.newmenu();
		switch (a) {
		case 1:
			cout << "������ ������ �Է����ּ���. : ";
			cin >> b;
			(*p).setTotal(b * 1500); //��ü �����ͷ� �հ� ��������
			break;
		case 2:
			cout << "������ ������ �Է����ּ���. : ";
			cin >> b;
			(*p).setTotal(b * 900);
			break;
		case 3:
			cout << "������ ������ �Է����ּ���. : ";
			cin >> b;
			(*p).setTotal(b * 2000);
			break;
		case 4:
			cout << "������ ������ �Է����ּ���. : ";
			cin >> b;
			(*p).setTotal(b * drink.newprice());
			break;
		case 5:
			break;

		}
		if (a == 5) //5�� �� ������ Ż���ϱ� ���ؼ� ���� �ڵ�
			break;

	}
	if (a == 5)
		cout << "��� ���Դϴ�. ��ٷ��ּ��� . . ." << endl << endl;
	drink.purchase(drink.getTotal());
}