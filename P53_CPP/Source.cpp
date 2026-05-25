#include<iostream>
#include<Windows.h>
#include<iomanip>

using namespace std;

enum Color
{
	Black = 0, Blue = 1, Green = 2, Cyan = 3, Red = 4, Magenta = 5, Brown = 6, LightGray = 7, DarkGray = 8,
	LightBlue = 9, LightGreen = 10, LightCyan = 11, LightRed = 12, LightMagenta = 13, Yellow = 14, White = 15
};

void SetColor(int text, int background)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (WORD)((background << 4) | text));
}

int main()
{
	SetConsoleCP(65001); 
	SetConsoleOutputCP(65001);
	cout.setf(ios::boolalpha);
	SetColor(White, LightBlue);
	system("cls");

	srand(time(0));

	/// 25.05.2026

	//int a, sum = 0;
	//do
	//{
	//	cin >> a; 
	//	sum += a;
	//} while (a != 0);
	//cout << sum << endl;

	for (size_t i = 0; i < 10; i++)
	{
		cout << rand() % 10 + 10 << endl;
	}
	



	//typedef unsigned char Pupsik;
	//Pupsik t;


	/// 22.05.2026

	//Дано  — цена 1 кг конфет.Вывести стоимость 0.1,
	//	0.2, ..., 1 кг конфет.



	//Дано вещественное число A и целое число N(> 0).Используя один
	//	цикл, вывести все целые степени числа A от 1 до N.


	//float a, res;
	//cin >> a;
	//res = a;

	//int n = 10;
	//for (size_t i = 0; i < n; i++)
	//{
	//	cout << res << endl;
	//	res *= a;
	//}
	//cout << "---- 1 ----" << endl;
	//SetColor(White, Black);
	//cout << " Mo Tu We TH Fr";
	//SetColor(White, LightRed);
	//cout << " Sa Su" << endl;
	//SetColor(Black, White);
	//int k = 3;
	//for (int d = 1 - k; d <= 31; d++)
	//{
	//	if (d <= 0)
	//		cout << "   ";
	//	else
	//	{
	//		SetColor(((d + k) % 7 == 6 || (d + k) % 7 == 0) ? LightRed : Black, White);
	//		cout << setw(3) << d;
	//		if ((d + k) % 7 == 0)
	//			cout << endl;
	//	}
	//}



	//while (5)
	//{

	//}

	//for (size_t i = 1; i <= 10; i++)
	//	cout << i << endl;
	//

	//int i = 1;
	//while (i <= 10)
	//	cout << i++ << endl;
	//

	//do
	//{

	//} while (true);


	/// 18.05.2026

	//(condition) ? oper1 : oper2;

	//int a = 5, b = 4,c = 3, max;
	//if (a > b)
	//{
	//	max = a;
	//}
	//else
	//{
	//	max = b;
	//}

	//(a > b) ? max = a : max = b;

	//max = (a > b) ? a : b;

	//max = (a > b && a > c) ? a : (b > c) ? b : c;



	//int a, b, c;
	//cin >> a >> b >> c;

	//if (a % 2 == 0)
	//{
	//	cout << "a is even" << endl;
	//}
	//else
	//{
	//	cout << "a is odd" << endl;
	//}

	// 3 1 2
	//if (a > b && a > c)
	//{
	//	cout << a << endl;
	//}
	//else if (b > c)
	//{
	//	cout << b << endl;
	//}
	//else
	//{
	//	cout << c << endl;
	//}

	// 2+3

	//float a, b;
	//char op;
	//cin >> a >> op >> b;

	//switch (op)
	//{
	//case '+': cout << a + b << endl; break;
	//case '-': cout << a - b << endl; break;
	//case '*': cout << a * b << endl; break;
	//case '/': cout << a / b << endl; break;
	//default: 
	//	cout << "Error. Use correct symbol (+, -, *, /)" << endl;
	//	break;	
	//}

	//if (op == '+')
	//{
	//	cout << a + b << endl;
	//}
	//else if (op == '-')
	//{
	//	cout << a - b << endl;
	//}
	//else if (op == '*')
	//{
	//	cout << a * b << endl;
	//}
	//else if (op == '/')
	//{
	//	cout << a / b << endl;
	//}
	//else
	//{
	//	cout << "Error. Use correct symbol (+, -, *, /)" << endl;
	//}


	//int m;
	//cin >> m;
	//switch (m) {
	//case 1: case 2: case 12: cout << "Winter"; break;
	//case 3: case 4:	case 5:  cout << "Spring"; break;

	//case 6: cout << "Summer"; break;
	//case 7: cout << "Summer"; break;
	//case 8: cout << "Summer"; break;

	//case 9: cout << "Autumn"; break;
	//case 10: cout << "Autumn"; break;
	//case 11: cout << "Autumn"; break;
	//default: cout << "Error" << endl;
	//}
	//return 0;





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

	//cout << pow(2.2, 3.258) << endl;;

	//printf("Hello %d World!\n", 5);

	return 0;
}
