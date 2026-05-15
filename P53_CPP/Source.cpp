#include<iostream>
#include<Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(65001); 
	SetConsoleOutputCP(65001);
	cout.setf(ios::boolalpha);


	//cout << "Hello \\World\\!\n" << endl;
	//cout << "Мене звати Сергій" << endl;
	//cout << 125 << endl;
	//cout << 125.354 << endl;
	//cout << true << endl;


	// type name;

	// bool  - 1b

	// char  - 1b

	// short - 2b
	// int   - 4b
	// long  - 4b
	// long long - 8b

	// float  - 4b (7 digits)
	// double - 8b (15 digits)
	// long double - 16b (19 digits)

	//const int a = 5;
	//cout << a << endl;

	//int x = 5.99;
	//cout << x << endl;

	//char t = 'a';
	//cout << (char)(t + 3.5) << endl;

	//cout << 5 / 3 << endl;


	//unsigned int b = 3000000000;
	//cout << b << endl;

	// _

	// - + ++ --
	// + - * / % += -= *= /= %= 
	// !
	// < > <= >= == != && ||
	// () [] {} :: ~ ?: -> . ,

	//int a = 5, b = 4, c;
	//c = a++ * (--b + a-- / ++b);
	//cout << a << endl;
	//cout << b << endl;
	//cout << c << endl;

	//cout << 10 % 5 << endl;

	//a = a + b;
	//a += b; 

	//cout << (int)(15.2 / 4) << endl;

	//c = !a;
	//cout << c << endl;

	//int a, b;
	//cin >> a;
	//cin >> b;
	//float c = (a + b) / 2.f;
	//cout << "Середнє арифметичне: " << c << endl;

	cout << pow(2.2, 3.258) << endl;;

	printf("Hello %d World!\n", 5);

	return 0;
}
