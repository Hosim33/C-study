#include <iostream>
using namespace std;

#include "phonenum.h"
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