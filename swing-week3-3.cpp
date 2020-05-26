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
	cout << "숫자 다섯개를 입력해주세요 (띄어쓰기로 구분)";
	for (i = 0; i < 5; i++)
		cin >> arr[i];
	cout << "< 정렬 전 >" << endl;
	print(arr);
	cout << endl << "< 정렬 후 >" << endl;
	sort(arr);
	print(arr);
}