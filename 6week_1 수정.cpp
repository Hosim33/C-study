#include <iostream>
#include <string>
using namespace std;
int num2, pw2; //menu ��ȣ �Է� �޴� ������ ��й�ȣ Ȯ�ο�

class ATM {
private:
	string name; //������ �̸�
	int pw; //���� ��й�ȣ
	int money; //���� �ܾ�

public:
	ATM();
	void Name();
	void Money();
	void deposit();   //�Ա� 1
	void withdraw();           // ���� 2
	void send(string receiver, int sendMon);  // ��ü - ���� 3
	void receive(int receiveMon);  // ��ü - ���� 3
	int getMoney();  // ���ִ��� ��� 4
	string getName(); // �̸� �ҷ�����
	void menu();  //���� ȭ�� ���
	void pwinput(); //��й�ȣ �Է�
	void pwcheck(); //���� �� ��й�ȣ Ȯ��
	void pwcheck2(); //��Ÿ ��й�ȣ Ȯ��
};
void ATM::Name() {
	cin >> name;
}

void ATM::Money() {
	cout << "�Ա��� �ݾ��� �Է����ּ��� >> ";
	cin >> money;
}

void ATM::pwinput() {
	cout << "��й�ȣ�� �Է����ּ��� >> ";
	cin >> pw;
}

void ATM::pwcheck() {
	cout << "�ѹ� �� �Է����ּ��� >> ";
	cin >> pw2;
	while (pw2 != pw) {
		cout << "��й�ȣ�� ���� �ٸ��ϴ�." << endl;
		cout << endl;
		cout << "��й�ȣ�� �Է����ּ��� >> ";
		cin >> pw;
		cout << "�ѹ� �� �Է����ּ��� >> ";
		cin >> pw2;
	}
}
void ATM::pwcheck2() {
	cin >> pw2;
	while (1) {
		if (pw2 != pw) {
			cout << "��� ��ȣ�� Ʋ�Ƚ��ϴ�." << endl;
		    cout << "��� ��ȣ�� �Է��� �ּ��� >>";
		    cin >> pw2;
	    }
		if (pw2 == pw)
			break;
	} 
}

ATM::ATM() { }

void ATM::menu() {
	cout << "1. �Ա�" << endl;
	cout << "2. ����" << endl;
	cout << "3. ��ü" << endl;
	cout << "4. �ܾ� Ȯ��" << endl;
	cout << "5. ����" << endl;
	cout << endl << "��ȣ�� �������ּ��� >> ";
	cin >> num2;
}
void ATM::deposit() {
	int in;
	cout << "�Ա��� �ݾ��� �Է����ּ��� >>";
	cin >> in;
	money += in;
	cout << "���� " << name << "���� �ܾ���" << money << "�� �Դϴ�." << endl;
}
void ATM::withdraw() {
	int a;
	cout << "�󸶸� �����Ͻðڽ��ϱ�? >>";
	cin >> a;
	money = money - a;
}

void ATM::send(string receiver, int sendMon) {
	money -= sendMon;
}
void ATM::receive(int receiveMon) {
	money += receiveMon;
}
int ATM::getMoney() {
	return money;
}
string ATM::getName() {
	return name;
}

int main()
{
	int num = 0, i, point = 0, j, k; //num�� ��� �Է¹޴� ����,i�� �ݺ��� ������ ����,point�� ������ �ε��� ����, j�� �� ���� �� ������ ���翩�� Ȯ��, k�� �� �޴� ������ �ε��� �����ϴ� ����
	int sendMon, check = 0; //sendMon�� �� �׼� �����ϴ� ����, check�� ������ �̸� ���翩�� Ȯ���ϴ� ����
	string who, who2;
	cout << "���࿡ ������ �ο��� �Է����ּ��� >> ";
	cin >> num;
	ATM* member = new ATM[num]; //new�� �迭 ���� ����
	for (i = 0; i < num; i++) {
		cout << endl << i + 1 << "��° �մ�" << endl;
		cout << endl << "������ �����ֽʽÿ� >> ";
		member[i].Name();
		member[i].pwinput();
		member[i].pwcheck();
		member[i].Money();
		cout << endl << endl;
	}
	while (1) {
		cout << endl << " ---  SWING ATM  --- " << endl;
		cout << "������ �Է����ּ��� (������ x�� �Է����ּ���) >> ";
		cin >> who;
		cout << endl;
		if (who == "x") {
			cout << "ATM�� �����մϴ�.";
			exit(1);
		}

		for (i = 0; i < num; i++) {
			if (who == member[i].getName()) {
				point = i;
				check = 1;
				break;
			}
		}

		if (check == 0) {
			cout << "�������� �ʴ� �������Դϴ�." << endl;
	}

			if (point < num && check == 1) {
				do
				{
					cout << " ---  SWING ATM " << member[point].getName() << "��  --- " << endl;
					member[point].menu();

					switch (num2)
					{
					case 1:
						member[point].deposit();
						break;
					case 2:
						member[point].withdraw();
						cout << "��й�ȣ�� �Է����ּ��� >> ";
						member[point].pwcheck2();
						cout << endl;
						cout << endl << "����" << member[point].getName() << "���� �ܾ��� " << member[point].getMoney() << "�� �Դϴ�." << endl;
						break;
					case 3:
						j = 0;
						cout << "�������� �����ڽ��ϱ�? >>";
						cin >> who2;
						for (i = 0; i < num; i++) {
							if (who2 == member[i].getName()) {
								k = i;
								j++;
								break;
							}
						}
						if (j == 0)
							break;

						if (j == 1) {
							cout << "�󸶸� �����ðڽ��ϱ�? >> ";
							cin >> sendMon;
							cout << "��й�ȣ�� �Է����ּ��� >>";
							member[point].pwcheck2();
							member[point].send(who2, sendMon);
							member[k].receive(sendMon);
							cout << who2 << "�Բ� " << sendMon << "���� ���½��ϴ�." << endl;
							cout << endl;
							cout << member[point].getName() << "���� ���� �ܾ���" << member[point].getMoney() << "�� �Դϴ�." << endl;
						}
						break;
					case 4:
						cout << member[point].getName() << "���� ���� �ܾ���" << member[point].getMoney() << "�� �Դϴ�." << endl;
						break;
					}
				} while (num2 != 5);
			}
			check = 0;
		continue;
	} while (who != "x");

	delete[] member;
	return 0;

}