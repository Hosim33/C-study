#include <iostream>
using namespace std;
int i, tmp=0,k;
void print(int *arr) 
{
	for (i=1;i<6;i++)
		cout << i <<"." << arr[i-1] << endl;
}

void sort(int* arr)
{
	for (i = 0; i < 5; i++) {
	    for (k = 0; k < 4; k++)
	    {
		    if (arr[k] > arr[k + 1])
		    {
			    tmp = arr[k];
			    arr[k] = arr[k + 1];
			    arr[k + 1] = tmp;
		    }
	    }
    }
}


int main()
{
	int arr[5];
	cout << "���� �ټ����� �Է����ּ��� (����� ����)";
	for (i = 0; i < 5; i++)
		cin >> arr[i];
	cout << "< ���� �� >" << endl;
	print(arr);
	cout << endl << "< ���� �� >" << endl;
	sort(arr);
	print(arr);
}