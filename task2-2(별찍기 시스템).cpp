#include <iostream>
using namespace std;

int main() {
	int num,a,i,k,f; //num�� �ý��ۿ��� �����ϴ� �����̰� a�� ���̳� ������ Ȧ���� �Է� �޴� ���� �������� for������ ���� �������̴�.

	while(1)
	{
		cout << "---------�� ��� �ý���---------" << endl;
		cout << "����� ���� ����� �������ּ���." << endl;
		cout << "1. �����ﰢ��" << endl;
		cout << "2. ���ﰢ��" << endl;
		cout << "3. ����" << endl;
		cout << "4. ������" << endl;
		cin >> num;

		switch (num) {
		case 1:
			cout <<endl<< "�����ﰢ���� �����ϼ̽��ϴ�." << endl;
			cout << "���� ������ �������ּ���."<< endl;
			cin >> a;
			for (i = 0; i <a; i++) {
				for (k = 0; k <= i; k++) {
					cout << "*";
				}
				cout << endl;
			}
		
			break;
		case 2:
			cout <<endl<< "���ﰢ���� �����ϼ̽��ϴ�." << endl;
			cout << "���� ������ �������ּ���." << endl;
			cin >> a;
			for (i = 1; i <= a; i++) {
				for (k = 0; k <a-i; k++) 
					cout << " ";
				for (f = 1; f <= i * 2 - i; f++)
					cout << "*";
				for (f = 1; f <= i * 2 - i; f++)
					cout << "*";
				for (k = 0; k < a - i; k++)
					cout << " ";
				cout << endl;
			}
			break;
		case 3:
			cout << endl << "���� �����ϼ̽��ϴ�." << endl;
			while(1){
			cout << "Ȧ���� �Է����ּ���:";
			cin >> a;

			if (a % 2 != 0)
				break;
		    }
			a = (a - 1) / 2;
			for (i = 0; i <= a; i++) {
				for (k = 0; k <= i; k++)
					cout << "*";
				for (k = a; k > i; k--)
					cout << " ";
				for (k = a; k > i; k--)
					cout << " ";
				for (k = 0; k <= i; k++)
					cout << "*";
				cout << endl;
			}
			for (i = 1; i <= a; i++)
			{
				for (k = a; k >= i; k--)
					cout << "*";
				for (k = 1; k <= i; k++)
					cout << " ";
				for (k = 1; k <= i; k++)
					cout << " ";
				for (k = a; k >= i; k--)
					cout << "*";
				cout << endl;
			}
            break;
		case 4:
			break;
		}
		if (num == 4) {
			cout << endl << "�����⸦ �����ϼ̽��ϴ�." << endl;
			cout << "�����մϴ�." << endl;
			break;
		}
	}
	
}