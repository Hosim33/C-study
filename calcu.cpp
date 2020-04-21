#include <iostream>
using namespace std;
int main(void)
{
	float a, b, c, d, e, f;
	cout << "first number>>";
	cin >> a;
	cout << "second number>>";
	cin >> b;
	c = a + b;
	d = a - b;
	e = a * b;
	f = a / b;
	cout << "==========계산 결과==========\n";
	cout << a << "+" << b << "=" << c << endl;
	cout << a << "-" << b << "=" << d << endl;
	cout << a << "*" << b << "=" << e << endl;
	cout.precision(2);
	cout << a << "/" << b << "=" << f << endl;
	return 0;
}
