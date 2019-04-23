#include"String.h"

int main() {

	String s("Hello, World");
	String s1(s);
	//cout << s << endl;
	//cout << s1 << endl;
	
	cout << s + "This is me!" << endl;
	cout << s + s1 << endl;
	cout << s + '!' << endl;
	String s2("Take it easy");
	//s += s2;
	//cout << s << endl;
	cout << s[0] << endl;

	cout << "Hello, World" + s << endl;

	system("pause");
	return 0;
}