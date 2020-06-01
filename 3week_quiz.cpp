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
	cout << "두 수를 입력해 주세요 (띄어쓰기로 구분) >> ";
	cin >> num1 >> num2;
	
	cout << "큰 수 >> ";
	max(num1,num2);
	cout << endl <<"작은 수 >> ";
	min(num1, num2);
}