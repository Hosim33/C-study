#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random { //Random 클래스 선언
public: //멤버에 대한 접근 지정자-모든 클래스 접근 가능
    Random(); //생성자-클래스 이름과 동일함
    int next(); //next()멤버함수
    int nextInRange(int x, int y); //nextlnRange()멤버함수
}; //세미콜론으로 끝남
Random::Random() { //매개 변수 없는 생성자임
    srand((unsigned)time(0)); //항상 다른 값이 나오게 하려고 넣은 코드
}
int Random::next() { //next()함수 부분
    return rand(); //랜덤함수를 리턴함
}
int Random::nextInRange(int x, int y) { //nextlnRange()함수 부분 매개변수가 있음
    return rand() % (y - x + 1) + x; // % 연산자를 통해 매개변수 x와 y 사이의 값만 나올 수 있도록 해줌
}
int main() { //main 함수 부분
    Random r; //이름이 r인 Random 타입의 객체 생성
    cout << "== 0에서 " << RAND_MAX << "까지의 랜덤 정수 10 개==" << endl; //RAND_MAX는 32767이다.
    for (int i = 0; i < 10; ++i) { //10개의 정수가 나오도록 반복문 10번 돈다.
        int n = r.next(); // 0에서 RAND_MAX(32767) 사이의 랜덤한 정수 변수 n 선언, r의 멤버함수 next()호출
        cout << n << ' '; //랜덤한 정수 출력해주고 공백으로 띄어쓰기 간격도 만들어준다.
    }
    cout << endl << endl << "== 2에서 " << "4 까지의 랜덤 정수 10 개 ==" << endl;
    for (int i = 0; i < 10; ++i) { //10개의 정수가 나올 수 있도록 반복문 10번 돈다.
        int n = r.nextInRange(2, 4); //2에서 4 사이의 랜덤한 정수, r의 멤버함수 nextlnRange()호출
        cout << n << ' '; //랜덤한 정수 출력해주고 공백으로 띄어쓰기 간격도 만들어준다.
    }
    cout << endl;
}
