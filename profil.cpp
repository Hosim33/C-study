#include <iostream>
#include <string>
using namespace std;
int main(void)
{
	string name, birth, age, major;
	cout << "�̸��� �Է��ϼ���:";
	getline(cin, name);
	cout << "������ �Է��ϼ���:";
	getline(cin, birth);
	cout << "���̸� �Է��ϼ���:";
	getline(cin, age);
	cout << "�Ҽ��а��� �Է��ϼ���:";
	getline(cin, major);
	cout << "\n" <<"======================================="<< "\n";
	cout << "<ȸ�� ����>" << "\n";
	cout << "�̸�:" << name << endl;
	cout << "����:" << birth << endl;
	cout << "����:" << age << endl;
	cout << "�Ҽ� �а�:" << major << endl;
	return 0;
}