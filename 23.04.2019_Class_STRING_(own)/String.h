#pragma once
#include<iostream>
using namespace std;


class String {
	char* str;
	int cur_size;
	int buf_size;

public:
	String();
	String(const char*s);
	String(const String&obj);
	//~String(); //этот деструктор не нужен, т.к. после окончания программы чар массив автоматически удаляется
	String operator=(const char*s);
	String operator=(const String& s);
	String operator+(String s);
	String operator+=(String s);
	String operator+(const char*s);
	String operator+(char a);

	char operator[](int index);

	friend ostream& operator<<(ostream& os, String s);
	//friend istream& operator>>(istream& is, String s);
};
ostream& operator<<(ostream& os, String s);