#include "String.h"

String::String()
{
	cur_size = 0;
	buf_size = 32;
	str = new char[buf_size];
	*str = '\0'; //empty string
}

String::String(const char *s)
{
	int k = strlen(s);
	buf_size = k + 1;// +1 is "\0"
	str = new char[buf_size];

	for (int i = 0; i <= k; i++)
		str[i] = s[i];

	cur_size = k;
}

String::String(const String& obj)
{
	this->cur_size = obj.cur_size;
	this->buf_size = obj.buf_size;
	this->str = new char[buf_size];
	for (int i = 0; i <= cur_size; i++)
		str[i] = obj.str[i];
	//str[cur_size] = '\0'; //обязательно обозначить конец строки, если просто <cur_size, а если <= то не надо
}

String String::operator=(const char *s)
{
	int k = strlen(s);
	cur_size = k;
	buf_size = k + 1;
	str = new char[buf_size];
	for (int i = 0; i <= k; i++)
		str[i] = s[i];

	return *this;
}

String String::operator=(const String& s)
{
	this->cur_size = s.cur_size;
	this->buf_size = s.buf_size;
	str = new char[buf_size];
	for (int i = 0; i <= cur_size; i++)
		str[i] = s.str[i];

	return *this;
}

String String::operator+(String s)
{
	String tmp;
	tmp.cur_size = 0;
	tmp.buf_size += s.buf_size;
	tmp.str = new char[tmp.buf_size];
	for (int i = 0; i < cur_size; i++)
		tmp.str[tmp.cur_size++] = str[i];
	for (int i = 0; i <= s.cur_size; i++)
		tmp.str[tmp.cur_size++] = s.str[i];

	return tmp;
}

String String::operator+=(String s)
{
	String tmp(str);
	cur_size = 0;
	buf_size += s.buf_size;
	str = new char[buf_size];
	for (int i = 0; i < tmp.cur_size; i++)
		str[cur_size++] = tmp.str[i];
	for (int i = 0; i <= s.cur_size; i++)
		str[cur_size++] = s.str[i];

	return *this;
}

String String::operator+(const char * s)
{
	int k = strlen(s);
	String tmp;
	tmp.cur_size = 0;
	tmp.buf_size = buf_size + k;
	tmp.str = new char[tmp.buf_size];
	for (int i = 0; i < cur_size; i++)
		tmp.str[tmp.cur_size++] = str[i];
	for (int i = 0; i <= k; i++)
		tmp.str[tmp.cur_size++] = s[i];

	return tmp;
}

String String::operator+(char a)
{
	String tmp;
	tmp.cur_size = 0;
	tmp.buf_size = buf_size + 1;
	tmp.str = new char[tmp.buf_size];
	for (int i = 0; i < cur_size; i++)
		tmp.str[tmp.cur_size++] = str[i];
	tmp.str[tmp.cur_size++] = a;
	tmp.str[tmp.cur_size] = '\0';

	return tmp;
}

char String::operator[](int index)
{
	return str[index];
}

ostream & operator<<(ostream & os, String s)
{
	os << s.str;
	return os;
}
