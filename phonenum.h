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
	string name; //�̸� �����ϴ� ����
	string num; //��ȭ��ȣ �����ϴ� ����
};

#endif