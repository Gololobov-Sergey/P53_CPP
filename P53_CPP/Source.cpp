#include<iostream>
#include<Windows.h>
#include<iomanip>

#include"myFunc.h"

using namespace std;

int main()
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	cout.setf(ios::boolalpha);
	SetColor(White, Black);
	system("cls");

	srand(time(0));


	/// 08.06.2026


	//rec();


	const int size = 10;
	float arr[size];
	setArray<float>(arr, size);
	printArray(arr, size);
	//cout << maxValueArray(arr, size) << endl;

	fff<int>();

	//cout << Sum(3, 5.5) << endl;
	//cout << Sum(3.5, 5) << endl;
	//cout << Sum(3.5, 5.5) << endl;
	//cout << Sum(3, 'a', 2.5) << endl;

	//auto a = 10 + 3.5;

	//int c = 9;

	//a = 3.5;

	//decltype(a + c) b;

	//auto m = 'c';



	/// 05.06.2026

	// arr[..][..][metagalaxy][galaxy][system][planet][continent][country][city][street][house][number]

	//starLine();
	//starLine(30);
	//starLine(20, '#');


	////cout << avg3(3, 4, 6) << endl;

	////size array
	//const int size = 20;
	//int arr[size];
	//setArray(arr, size);
	//printArray(arr, size);
	////bublleSort(arr, size);
	////printArray(arr, size);
	//cout << findArray(arr, size, 110) << endl;

	//int ind;

	//cout << ind << endl;
	//cout << arr[ind] << endl;

	//int max;


	//f(1010101);
	//ff(87) // 100011101

	/// 01.06.2026

	//int min = 1, max = 100;
	//const int row = 5, col = 5;
	//int a[row][col];

	//for (size_t i = 0; i < row; i++)
	//{
	//	for (size_t j = 0; j < col; j++)
	//	{
	//		a[i][j] = rand() % (max - min + 1) + min;
	//	}
	//}

	//for (size_t i = 0; i < row; i++)
	//{
	//	for (size_t j = 0; j < col; j++)
	//	{
	//		bool flag = false;
	//		while (!flag)
	//		{
	//			int r = rand() % (max - min + 1) + min;
	//			for (size_t k = 0; k < row; k++)
	//			{
	//				for (size_t m = 0; m < col; m++)
	//				{
	//					if (a[k][m] == r)
	//					{
	//						flag = true;
	//					}
	//				}
	//			}
	//			if (!flag)
	//			{
	//				a[i][j] = r;
	//				break;
	//			}
	//			flag = false;
	//		}
	//	}
	//}



	//for (size_t i = 0; i < row; i++)
	//{
	//	for (size_t j = 0; j < col; j++)
	//	{
	//		cout << setw(4) << a[i][j];
	//	}
	//	cout << endl;
	//}


	//int maxV = a[0][0];
	//int minV = a[0][0];
	//int iMin = 0, iMax = 0, jMin = 0, jMax = 0;
	//for (size_t i = 0; i < row; i++)
	//{
	//	for (size_t j = 0; j < col; j++)
	//	{
	//		if (a[i][j] > maxV)
	//		{
	//			maxV = a[i][j];
	//			iMax = i;
	//			jMax = j;
	//		}
	//		if (a[i][j] < minV)
	//		{
	//			minV = a[i][j];
	//			iMin = i;
	//			jMin = j;
	//		}
	//	}
	//}


	//int s = 0;
	//for (size_t i = iMin; i <= iMax; i++)
	//{
	//	for (size_t j = 0; j < col; j++)
	//	{
	//		if (i == iMin && j > jMin || i == iMax && j < jMax || i > iMin && i < iMax)
	//		{
	//			s += a[i][j];
	//		}
	//	}
	//}

	//cout << s << endl;


	//for (size_t i = 0; i < row; i++)
	//{
	//	for (size_t j = 0; j < col; j++)
	//	{
	//		//if (a[i][j] == maxV)
	//		//{
	//		//	SetColor(Red, Black);
	//		//}
	//		//else if (a[i][j] == minV)
	//		//{
	//		//	SetColor(Green, Black);
	//		//}
	//		//else
	//		//{
	//		//	SetColor(White, Black);
	//		//}

	//		SetColor((a[i][j] == maxV) ? Red : (a[i][j] == minV) ? Green : White, Black);

	//		cout << a[i][j] << " ";
	//	}
	//	cout << endl;
	//}


	/// 29.05.2026

	//const int size = 10;

	//int a[size]; // = {}; // = { 1,2,3,4,5 };

	////int count = 0;
	//int min = 0, max = 10;
	//for (size_t i = 0; i < size; i++)
	//{
	//	a[i] = rand() % (max - min + 1) + min;
	//	//cin >> a[i];
	//}

	//for (size_t i = 0; i < size; i++)
	//{
	//	cout << a[i] << " ";
	//}
	//cout << endl;


	//for (size_t i = 0; i < size - 1; i++)
	//{
	//	for (size_t j = 0; j < size - 1 - i; j++)
	//	{
	//		if (a[j] > a[j + 1])
	//		{
	//			swap(a[i], a[i + 1]);
	//		}
	//	}
	//}

	//for (size_t i = 0; i < size; i++)
	//{
	//	cout << a[i] << " ";
	//}
	//cout << endl;

	//for (size_t i = 0; i < size / 2; i++)
	//{
	//	int t = a[i];
	//	a[i] = a[size - 1 - i];
	//	a[size - 1 - i] = t;
	//}
	//cout << endl;

	//for (size_t i = 0; i < size; i++)
	//{
	//	cout << a[i] << " ";
	//}
	//cout << endl;


	//for (int i = size - 1; i >= 0; i--)
	//{
	//	cout << a[i] << " ";
	//}
	//cout << endl;

	//int t = a[0];
	//a[0] = a[size - 1];
	//a[size - 1] = t;

	//for (size_t i = 0; i < size; i++)
	//{
	//	cout << a[i] << " ";
	//}
	//cout << endl;

	//int maxValue = a[0];
	//int index = 0;
	//for (size_t i = 1; i < size; i++)
	//{
	//	if (a[i] >= maxValue) 
	//	{
	//		maxValue = a[i];
	//		index = i;
	//	}
	//}
	//cout << maxValue << endl;
	//cout << index << endl;


	//int b[size];
	//int j = 0;
	//for (size_t i = 0; i < size; i++)
	//{
	//	if (a[i] % 2 == 0) 
	//	{
	//		b[j++] = a[i];
	//	}
	//}

	//for (size_t i = 0; i < j; i++)
	//{
	//	cout << b[i] << " ";
	//}
	//cout << endl;







	//for (size_t i = 0; i < size; i++)
	//{
	//	if (a[i] % 2 == 0)
	//	{
	//		count++;
	//	}
	//}
	//cout << count << endl;


	/// 25.05.2026

	//int a, sum = 0;
	//do
	//{
	//	cin >> a; 
	//	sum += a;
	//} while (a != 0);
	//cout << sum << endl;

	//for (size_t i = 0; i < 10; i++)
	//{
	//	cout << rand() % 10 + 10 << endl;
	//}




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
