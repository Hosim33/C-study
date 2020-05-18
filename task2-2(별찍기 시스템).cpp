#include <iostream>
using namespace std;

int main() {
	int num,a,i,k,f; //num은 시스템에서 선택하는 변수이고 a는 행이나 나비의 홀수를 입력 받는 변수 나머지는 for문에서 쓰일 변수들이다.

	while(1)
	{
		cout << "---------별 찍기 시스템---------" << endl;
		cout << "만들고 싶은 모양을 선택해주세요." << endl;
		cout << "1. 직각삼각형" << endl;
		cout << "2. 정삼각형" << endl;
		cout << "3. 나비" << endl;
		cout << "4. 나가기" << endl;
		cin >> num;

		switch (num) {
		case 1:
			cout <<endl<< "직각삼각형을 선택하셨습니다." << endl;
			cout << "행의 개수를 선택해주세요."<< endl;
			cin >> a;
			for (i = 0; i <a; i++) {
				for (k = 0; k <= i; k++) {
					cout << "*";
				}
				cout << endl;
			}
		
			break;
		case 2:
			cout <<endl<< "정삼각형을 선택하셨습니다." << endl;
			cout << "행의 개수를 선택해주세요." << endl;
			cin >> a;
			for (i = 1; i <= a; i++) {
				for (k = 0; k <a-i; k++) 
					cout << " ";
				for (f = 1; f <= i * 2 - i; f++)
					cout << "*";
				for (f = 1; f <= i * 2 - i; f++)
					cout << "*";
				for (k = 0; k < a - i; k++)
					cout << " ";
				cout << endl;
			}
			break;
		case 3:
			cout << endl << "나비를 선택하셨습니다." << endl;
			while(1){
			cout << "홀수를 입력해주세요:";
			cin >> a;

			if (a % 2 != 0)
				break;
		    }
			a = (a - 1) / 2;
			for (i = 0; i <= a; i++) {
				for (k = 0; k <= i; k++)
					cout << "*";
				for (k = a; k > i; k--)
					cout << " ";
				for (k = a; k > i; k--)
					cout << " ";
				for (k = 0; k <= i; k++)
					cout << "*";
				cout << endl;
			}
			for (i = 1; i <= a; i++)
			{
				for (k = a; k >= i; k--)
					cout << "*";
				for (k = 1; k <= i; k++)
					cout << " ";
				for (k = 1; k <= i; k++)
					cout << " ";
				for (k = a; k >= i; k--)
					cout << "*";
				cout << endl;
			}
            break;
		case 4:
			break;
		}
		if (num == 4) {
			cout << endl << "나가기를 선택하셨습니다." << endl;
			cout << "감사합니다." << endl;
			break;
		}
	}
	
}