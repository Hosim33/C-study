#include <iostream>
using namespace std;

int main() {
	int num[5],c[5],d[5],i, a = 0, b = 0;

	for (i = 0; i < 5; i++) {
		cout << "���ڸ� �Է����ּ���:";
		cin >> num[i];
		if (num[i] % 2 == 0) 
			a++;
		else 
			b++;
		
	}
	cout <<endl<< "---------���---------" << endl;
	cout << "Ȧ��:" << endl;
	for (i = 0; i < 5; i++)
		if (num[i] % 2 != 0)
			cout << num[i] << " ";
	cout << endl<<"Ȧ���� �� " << b << "�� �Դϴ�." << endl;

	cout << endl << "¦��:" << endl;
	for (i = 0; i < 5; i++)
		if (num[i] % 2 == 0)
			cout << num[i] << " ";
	cout <<endl<< "¦���� �� " << a << "�� �Դϴ�." << endl;
}