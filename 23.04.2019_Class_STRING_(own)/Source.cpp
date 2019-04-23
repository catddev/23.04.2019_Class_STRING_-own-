#include"String.h"

int main() {

	String s("Hello, World");
	String s1(s);
	String s4(s);
	//cout << s << endl;
	//cout << s1 << endl;
	
	cout << s + "This is me!" << endl;
	cout << s + s1 << endl;
	cout << s + '!' << endl;
	String s2("Take it easy");
	//s += s2;
	//cout << s << endl;
	cout << s[0] << endl;

	cout << "Hello!!!" + s << endl;
	cout << '@' + s << endl;

	cout << s++ << endl; //постинкремент
	cout << ++s << endl; //преинкремент
	cout << s-- << endl;
	cout << --s << endl;

	String a("aa"), b("b"), c(a);
	if ( a == c) cout << "equal" << endl;
	if ( a != b) cout << "different" << endl;
	if ( b > a) cout << "larger" << endl;
	if ( a < b) cout << "less" << endl;

	if (a == "aa") cout << "are equal" << endl;
	if (a != "b") cout << "are different" << endl;
	if (b > "a") cout << "is larger" << endl;
	if (a < "b") cout << "is less" << endl;

	cout << s4.substr(2, 5) << endl; // llo,
	cout << s4.find('o') << endl;

	String s3;
	cin >> s3;
	cout << s3 << endl;


	system("pause");
	return 0;
}