#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random { //Random Ŭ���� ����
public: //����� ���� ���� ������-��� Ŭ���� ���� ����
    Random(); //������-Ŭ���� �̸��� ������
    int next(); //next()����Լ�
    int nextInRange(int x, int y); //nextlnRange()����Լ�
}; //�����ݷ����� ����
Random::Random() { //�Ű� ���� ���� ��������
    srand((unsigned)time(0)); //�׻� �ٸ� ���� ������ �Ϸ��� ���� �ڵ�
}
int Random::next() { //next()�Լ� �κ�
    return rand(); //�����Լ��� ������
}
int Random::nextInRange(int x, int y) { //nextlnRange()�Լ� �κ� �Ű������� ����
    return rand() % (y - x + 1) + x; // % �����ڸ� ���� �Ű����� x�� y ������ ���� ���� �� �ֵ��� ����
}
int main() { //main �Լ� �κ�
    Random r; //�̸��� r�� Random Ÿ���� ��ü ����
    cout << "== 0���� " << RAND_MAX << "������ ���� ���� 10 ��==" << endl; //RAND_MAX�� 32767�̴�.
    for (int i = 0; i < 10; ++i) { //10���� ������ �������� �ݺ��� 10�� ����.
        int n = r.next(); // 0���� RAND_MAX(32767) ������ ������ ���� ���� n ����, r�� ����Լ� next()ȣ��
        cout << n << ' '; //������ ���� ������ְ� �������� ���� ���ݵ� ������ش�.
    }
    cout << endl << endl << "== 2���� " << "4 ������ ���� ���� 10 �� ==" << endl;
    for (int i = 0; i < 10; ++i) { //10���� ������ ���� �� �ֵ��� �ݺ��� 10�� ����.
        int n = r.nextInRange(2, 4); //2���� 4 ������ ������ ����, r�� ����Լ� nextlnRange()ȣ��
        cout << n << ' '; //������ ���� ������ְ� �������� ���� ���ݵ� ������ش�.
    }
    cout << endl;
}
