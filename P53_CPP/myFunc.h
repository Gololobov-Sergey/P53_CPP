#pragma once
#include<iostream>
#include<Windows.h>

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

//type name(param)
//{
//	body;
//}


void starLine(int size = 10, char symbol = '*')
{
	for (size_t i = 0; i < size; i++)
	{
		cout << symbol;
	}
	cout << endl;
}

template<class T>
double avg3(T a, T b, T c)
{
	return (a + b + c) / 3.;
}


template<class T>
void printArray(T arr[], int size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

template<class T>
void setArray(T arr[], int size, T minValue = 0, T maxValue = 9)
{
	cout << "template setArray" << endl;
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = T();
	}
}



void setArray(int arr[], int size, int minValue = 0, int maxValue = 9)
{
	cout << "int setArray" << endl;
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % (maxValue - minValue + 1) + minValue;
	}
}


template<class T>
void bublleSort(T arr[], int size)
{
	for (size_t i = 0; i < size - 1; i++)
	{
		for (size_t j = 0; j < size - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
		}
	}
}

template<class T>
int findArray(T arr[], int size, T key)
{
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] == key)
		{
			return i;
		}
	}

	return -1;
}

template<class T>
T maxValueArray(T arr[], int size)
{
	T maxValue = arr[0];
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] > maxValue)
		{
			maxValue = arr[i];
		}
	}
	return maxValue;
}

template<class T>
int countValueArray(T arr[], int size, T key)
{
	int count = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i]  ==  key)
		{
			count++;
		}
	}
	return count;
}

template<class T1, class T2, class T3>
auto Sum(T1 a, T2 b, T3 c) -> decltype(a+b)
{
	return a + b + c;
}


void rec()
{
	static int a = 0;
	a++;
	rec();
}

void printArray2D(int arr[10][10], int row, int col)
{

}

template<class T>
T fff()
{
	T a = 9;
	//
}