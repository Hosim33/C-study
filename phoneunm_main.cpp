#include <iostream>
using namespace std;

#include "phonenum.h"

int a; //�޴����� ��ȣ �Է¹��� ��������
void menu() //�޴� �Լ�
{
	cout << endl << "1. �ֽ� ��� ��ȭ��ȣ ��ȸ" << endl;
	cout << "2. �ֽ� ��� ��ȭ��ȣ ����" << endl;
	cout << "3. ���� >>";
	cin >> a;
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