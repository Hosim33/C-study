#include <iostream>
using namespace std;

void max(int a,int b)
{
	int max;
	if (a < b)
		max = b;
	else
		max = a;
	cout << max;
}

void min(int a,int b)
{
	int min;
	if (a < b)
		min = a;
	else
		min = b;
	cout << min;
}
int main()
{
	int num1, num2;
	cout << "�� ���� �Է��� �ּ��� (����� ����) >> ";
	cin >> num1 >> num2;
	
	cout << "ū �� >> ";
	max(num1,num2);
	cout << endl <<"���� �� >> ";
	min(num1, num2);
}