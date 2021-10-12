#include <iostream>
#include <math.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int number, first, second, third, obb = 0, k, primal;
	bool num_flag = true;

	srand(time(NULL)); //1st assign
	number = rand() % 900 + 100;

	cout << "(test) generaterd = " << number << endl;
	cin >> number;

	third = number % 10;
	second = number / 10 % 10;
	first = number / 100;
	
	cout << "Число в обратном порядке: " << third << second << first << endl;

	cout << "Среднее геометрическое: " << pow(first * second * third, 1 / 3.) << endl;

	if (first % 2 == 0) obb++;
	if (second % 2 == 0) obb++;
	if (third % 2 == 0) obb++;

	cout << "Количество четных цифр: " << obb << endl; //end 1st assign

	switch (first) //2nd assign
	{
	case 1: cout << "Сто "; break;
	case 2: cout << "Двести "; break;
	case 3: cout << "Триста "; break;
	case 4: cout << "Четыреста "; break;
	case 5: cout << "Пятьсот "; break;
	case 6: cout << "Шестьсот "; break;
	case 7: cout << "Семьсот "; break;
	case 8: cout << "Восемьсот "; break;
	case 9: cout << "Девятьсот "; break;
	default: cout << "";
	}

	switch (second)
	{
	case 1: 
		switch (third)
		{
		case 1: cout << "одиннадцать"; break;
		case 2: cout << "двеннадцать "; break;
		case 3: cout << "тринадцать"; break;
		case 4: cout << "четырнадцать "; break;
		case 5: cout << "пятнадцать "; break;
		case 6: cout << "шестьнадцать "; break;
		case 7: cout << "семнадцать "; break;
		case 8: cout << "восемнадцать "; break;
		case 9: cout << "девятнадцать "; break;
		}
		break;
	case 2: cout << "двадцать "; break;
	case 3: cout << "тридцать"; break;
	case 4: cout << "сорок "; break;
	case 5: cout << "пятьдесят "; break;
	case 6: cout << "шестьдесят "; break;
	case 7: cout << "семдесят "; break;
	case 8: cout << "восемдесят "; break;
	case 9: cout << "девяносто "; break;
	default: cout << "";
	}
	
	if (second == 1) cout << "";
	else
	{
		switch (third)
		{
		case 1: cout << "один "; break;
		case 2: cout << "два "; break;
		case 3: cout << "три "; break;
		case 4: cout << "четыре "; break;
		case 5: cout << "пять "; break;
		case 6: cout << "шесть "; break;
		case 7: cout << "семь "; break;
		case 8: cout << "восемь "; break;
		case 9: cout << "девять "; break;
		default: cout << "";
		}
	} //end 2nd assign

	cout << "\nПростые числа из отрезка [2;" << number << "]: " << endl; //3rd assign

	for (int i = 2; i <= number; i++)
	{
		primal = 0;
		for (k = 2; k < i; k++)
		{
			if (i % k == 0) primal++;
			
		}
		if (primal == 0) cout << k << " ";
	} //end 3rd assign

	return 0;
}