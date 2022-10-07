#pragma once
#include"Container_head.h"
#include"Header.h"
#include<iostream>

void Print_menu()
{
	system("cls");
	cout << "1.Новый объект" << endl << "2.Список Объектов" << endl << "3.Считать список из файла" << endl << "4.Записать список в файл"<<endl<<"5.Очистить список" << endl << "0.Выход" << endl;
}

int get_var()
{
	int number;
	while (true)
	{
		cin >> number;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid input " << endl;
		}
		else
			break;
		cout << "Try again" << endl;
	}
	return number;
}
ostream& operator <<(ostream& out, const RMS_obj& obj)
{
	out << obj.id << endl << obj.age << endl << obj.name << endl << obj.sex << endl;	
	return out;
}
istream& operator >>(istream& in, RMS_obj& obj)
{
	in >> obj.id;
	in >> obj.age;
	in >> obj.name;
	in >> obj.sex;
	return in;
}