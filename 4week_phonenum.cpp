#include <iostream>
#include <string>
using namespace std;
int a; //�޴����� ��ȣ �Է¹��� ��������
class Phonenum {
public:
    void addPhone();
	void editPhone();
	string getPnum(); 
	string getName();
private:
	string name; //�̸� �����ϴ� ����
	string num; //��ȭ��ȣ �����ϴ� ����
};
void Phonenum::addPhone() { //ó���� ����ó ����ϴ� �κ�
	cout << "--- swing ��ȭ��ȣ�� ---" << endl;
	cout << "�̸��� �Է��� �ּ��� >>";
	cin >> name;
	cout << "��ȭ��ȣ�� �Է��� �ּ��� >>";
	cin >> num;
}
void Phonenum::editPhone() { //����ó �����ϴ� �κ�
	string name2;
	cout << "�̸��� �Է��� �ּ��� >> ";
	do
	{
		cin >> name2;
		if (name2 == name)
		{
			cout << "������ ��ȭ��ȣ�� �Է��� �ּ��� >> ";
			cin >> num;
		}
		else
		{
			cout << "����ó�� �������� �ʽ��ϴ�. �ٽ� �Է����ּ��� >> ";
		}
	} while (name != name2);
}
string Phonenum::getPnum() { //��ȭ��ȣ �ҷ����� �Լ�
	return num;
}
string Phonenum::getName() { //�̸� �ҷ����� �Լ�
	return name;
}


void menu() //�޴� �Լ�
{
	cout << endl << "1. �ֽ� ��� ��ȭ��ȣ ��ȸ" << endl;
	cout << "2. �ֽ� ��� ��ȭ��ȣ ����" << endl;
	cout << "3. ���� >>";
	cin >>a;
}

int main() //���� �Լ� ����
{
	Phonenum people; //people ��ü ����
	people.addPhone();
	while (1) { //�޴�â ���ѷ��� �ݺ������� ��� ��µ� �� �ְ���
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
		if (a == 3) //while�� Ż��
			break;
	}
}