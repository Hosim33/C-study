#include <iostream>
#include <string>
using namespace std;

int main() {
	int num,i,j,tmp;
	cin >> num;
	int *array=new int[num];
	for (int i = 0; i < num; i++) {
		cin >> array[i];
	}
	cout << endl;
	for (i = 0; i < num; i++) {
		for (j = 0; j < num-1; j++) {
			if (array[j] > array[j + 1]) {
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
			}
		}
		if(i==num-1)
		break;
		for (int k = 0; k < num; k++)
			cout << array[k] << " ";
		cout << endl;
	}
	delete[] array;
}

