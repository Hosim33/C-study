#include <iostream>
using namespace std;
void swap(int *a, int *b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(void) 
{
	int num1,num2;
	int* x=&num1, * y=&num2;
	cout << "first number >> ";
	cin >> num1 ;
	cout <<  "second number >> ";
	cin >> num2;
	cout << "swap Àü >> "<< num1 << "  " << num2 << endl;
	swap(&num1, &num2);
	cout << "swap ÈÄ >> " << num1 << "  " << num2;
}