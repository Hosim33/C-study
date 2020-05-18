#include <iostream>
using namespace std;

int main() {
	int num[5],c[5],d[5],i, a = 0, b = 0;

	for (i = 0; i < 5; i++) {
		cout << "¼ýÀÚ¸¦ ÀÔ·ÂÇØÁÖ¼¼¿ä:";
		cin >> num[i];
		if (num[i] % 2 == 0) 
			a++;
		else 
			b++;
		
	}
	cout <<endl<< "---------°á°ú---------" << endl;
	cout << "È¦¼ö:" << endl;
	for (i = 0; i < 5; i++)
		if (num[i] % 2 != 0)
			cout << num[i] << " ";
	cout << endl<<"È¦¼ö´Â ÃÑ " << b << "°³ ÀÔ´Ï´Ù." << endl;

	cout << endl << "Â¦¼ö:" << endl;
	for (i = 0; i < 5; i++)
		if (num[i] % 2 == 0)
			cout << num[i] << " ";
	cout <<endl<< "Â¦¼ö´Â ÃÑ " << a << "°³ ÀÔ´Ï´Ù." << endl;
}