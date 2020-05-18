#include <iostream>
using namespace std;
int main() {
	int i,z;
	for (i = 0; i < 5; i++) {
		for (z = 0; z <= i; z++) {
			cout << "*";
		}
		cout << endl;
	}
}