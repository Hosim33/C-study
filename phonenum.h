#pragma once
#include <string>
#include <iostream>
using namespace std;
#ifndef phonenum_H
#define phonenum_H

class Phonenum {
public:
	void addPhone();
	void editPhone();
	string getPnum();
	string getName();
private:
	string name; //이름 저장하는 변수
	string num; //전화번호 저장하는 변수
};

#endif