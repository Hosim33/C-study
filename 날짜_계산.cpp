#include<iostream>
using namespace std;

int main() {
	int a, b, c;
	int month[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	cout << "a : ";
	cin >> a;
	cout << "b : ";
	cin >> b;
	if (a > 12 || b > month[a - 1]) {
		cout << "없는 날짜입니다.";
		exit(0);
	}
	for (int i = 0; i < a - 1; i++)
	{
		b += month[i];
		c = b % 7;
	}
	switch (c) {
	case 0:
		cout << "THU";
		break;
	case 1:
		cout << "FRI";
		break;
	case 2:
		cout << "SAT";
		break;
	case 3:
		cout << "SUN";
		break;
	case 4:
		cout << "MON";
		break;
	case 5:
		cout << "TUE";
		break;
	case 6:
		cout << "WED";
		break;
	}
}