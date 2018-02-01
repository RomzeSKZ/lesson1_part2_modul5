#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <time.h>
using namespace std;

void main()
{
Start:
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	int zadanie;
	cout << "Номер задания: ";
	cin >> zadanie;
	switch (zadanie)
	{

	case 1:
	{
		system("cls");
		cout << "Задание 1" << endl;
		cout << "Дан массив. Вывести на экран сначала его неотрицательные элементы, затем отрицательные." << endl;
		int a[10];
		cout << "Собственно массив:" << endl;
		for (int i = 0; i < 10; i++)
		{
			a[i] = -20 + rand() % 41;
			cout << a[i] << " ";
		}
		cout << endl << "Неотрицательные элементы:" << endl;
		for (int i = 0; i < 10; i++)
		{
			if (a[i] < 0)
				cout << a[i] << " ";
		}
		cout << endl << "Отрицательные элементы:" << endl;
		for (int i = 0; i < 10; i++)
		{
			if (a[i] > 0)
				cout << a[i] << " ";
		}
		cout << endl;
		goto Start;
		break;
	}
	case 2:
	{
		system("cls");
		cout << "Задание 2" << endl;
		cout << "В массиве хранится информация о количестве побед, одержанных 20 футбольными командами. Определить номера команд, имеющих меньше трех побед." << endl;
		int a[20];
		for (int i = 0; i < 20; i++)
		{
			a[i] = 1 + rand() % 5;
			cout << "Команда " << i + 1 << " = " << a[i] << " победы." << endl;
		}
		cout << "Команды, имеющие меньше трех побед: ";
		for (int i = 0; i < 20; i++)
		{
			if (a[i] < 3)
				cout << i + 1 << " ";
		}
		cout << endl;
		goto Start;
		break;
	}
	case 3:
	{
		system("cls");
		cout << "Задание 3" << endl;
		cout << "Ввести массив, состоящий из 14 элементов целого типа. Найти количество элементов четных по значению." << endl;
		cout << "Массив:" << endl;
		int a[14], k = 0;
		for (int i = 0; i < 14; i++)
		{
			a[i] = 1 + rand() % 100;
			cout << a[i] << " ";
			if (a[i] % 2 == 0)
				k++;
		}
		cout << endl << "Четных - " << k << endl;
		goto Start;
		break;
	}
	case 4:
	{
		system("cls");
		cout << "Задание 4" << endl;
		cout << "Ввести массив, состоящий из 12 элементов целого типа. Получить новый массив, заменив значение пятого элемента среднеарифметическим исходного массива" << endl;
		cout << "Массив:" << endl;
		int a[12], sum = 0;
		for (int i = 0; i < 12; i++)
		{
			a[i] = 1 + rand() % 20;
			cout << a[i] << " ";
			sum += a[i];
		}
		float sr = ((float)sum) / 12;
		cout.precision(3);
		cout << endl << sr << endl;
		float a1[12];
		for (int i = 0; i < 12; i++)
		{
			a1[i] = a[i];
		}
		for (int i = 0; i < 12; i++)
		{
			if (i == 4)
				a1[i] = sr;
		}
		for (int i = 0; i < 12; i++)
		{
			cout << a1[i] << " ";
		}
		cout << endl;
		goto Start;
		break;
	}
	case 5:
	{
		system("cls");
		cout << "Задание 5" << endl;
		cout << "Задан массив, состоящий из 15 элементов вещественного типа. Определить количество элементов, значения которых больше первого элемента." << endl;
		cout << "Массив:" << endl;
		double a[15];
		int k = 0;
		cout.precision(3);
		for (int i = 0; i < 15; i++)
		{
			a[i] = (double)(-1000 + rand() % 3000) / (double)(rand() % 100);
			cout << "|" << a[i] << "| ";
		}
		for (int i = 1; i < 15; i++)
		{
			if (a[i] > a[0])
				k++;
		}
		cout << endl << "Больше первого элемента - " << k << " элемент(-а)" << endl;
		goto Start;
		break;
	}
	break;
	}
}