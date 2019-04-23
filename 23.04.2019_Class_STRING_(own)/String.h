#pragma once
#include<iostream>
#include<string>
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
	char operator[](int index);

	String operator+(String s);
	String operator+=(String s);
	String operator+(const char*s);
	String operator+(char a);

	String operator++(); //преинкремент
	String operator++(int v);//просто условно ставим int v чтобы отличать (постинкремент) этот оператор от преинкремента
	String operator--();
	String operator--(int v);

	//ASCII
	bool operator==(String s)const;
	bool operator!=(String s)const;
	bool operator>(String s)const;
	bool operator<(String s)const;
	bool operator==(const char*s)const;
	bool operator!=(const char*s)const;
	bool operator>(const char*s)const;
	bool operator<(const char*s)const;

	String substr(int a, int b);
	String find(char a);
	
	friend ostream& operator<<(ostream& os, String s);
	friend istream& operator>>(istream& is, String &s);

	friend String operator+(const char* s, String obj);//чтобы можно было применять в качестве левостороннего значения не только это класс, в например просто чар массив,
	//поэтому объявляем другом внешний перегруженный оператор возвращаемого значения String
	friend String operator+(char a, String obj);
};
ostream& operator<<(ostream& os, String s);
istream& operator>>(istream& is, String &s);

String operator+(const char* s, String obj);
String operator+(char a, String obj);