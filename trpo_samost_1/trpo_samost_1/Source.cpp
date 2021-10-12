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
	
	cout << "����� � �������� �������: " << third << second << first << endl;

	cout << "������� ��������������: " << pow(first * second * third, 1 / 3.) << endl;

	if (first % 2 == 0) obb++;
	if (second % 2 == 0) obb++;
	if (third % 2 == 0) obb++;

	cout << "���������� ������ ����: " << obb << endl; //end 1st assign

	switch (first) //2nd assign
	{
	case 1: cout << "��� "; break;
	case 2: cout << "������ "; break;
	case 3: cout << "������ "; break;
	case 4: cout << "��������� "; break;
	case 5: cout << "������� "; break;
	case 6: cout << "�������� "; break;
	case 7: cout << "������� "; break;
	case 8: cout << "��������� "; break;
	case 9: cout << "��������� "; break;
	default: cout << "";
	}

	switch (second)
	{
	case 1: 
		switch (third)
		{
		case 1: cout << "�����������"; break;
		case 2: cout << "����������� "; break;
		case 3: cout << "����������"; break;
		case 4: cout << "������������ "; break;
		case 5: cout << "���������� "; break;
		case 6: cout << "������������ "; break;
		case 7: cout << "���������� "; break;
		case 8: cout << "������������ "; break;
		case 9: cout << "������������ "; break;
		}
		break;
	case 2: cout << "�������� "; break;
	case 3: cout << "��������"; break;
	case 4: cout << "����� "; break;
	case 5: cout << "��������� "; break;
	case 6: cout << "���������� "; break;
	case 7: cout << "�������� "; break;
	case 8: cout << "���������� "; break;
	case 9: cout << "��������� "; break;
	default: cout << "";
	}
	
	if (second == 1) cout << "";
	else
	{
		switch (third)
		{
		case 1: cout << "���� "; break;
		case 2: cout << "��� "; break;
		case 3: cout << "��� "; break;
		case 4: cout << "������ "; break;
		case 5: cout << "���� "; break;
		case 6: cout << "����� "; break;
		case 7: cout << "���� "; break;
		case 8: cout << "������ "; break;
		case 9: cout << "������ "; break;
		default: cout << "";
		}
	} //end 2nd assign

	cout << "\n������� ����� �� ������� [2;" << number << "]: " << endl; //3rd assign

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