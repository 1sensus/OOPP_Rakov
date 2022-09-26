#include <iostream>
#include <string>
#include <algorithm>
#include "Obj_class.cpp";


using namespace std;

void Print_menu() 
{
	
	system("cls");
	cout << "1.New object"<<endl<<"2.View object"<<endl<<"3.Read from file"<<endl<<"4.Write to file"<<endl<<"0.Exit"<<endl;
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
int main()	
{
	int var=-1;
	while (var != 0)
	{
		Print_menu();
		var = get_var();
		switch (var)
		{
		case 1:
			{
			system("cls");
			cout << "srabotala 1";
			system("pause");
			system("cls");			
			break;
			}
		case 2:
			{
			system("cls");
			a.Print_cout();
			a1.Print_cout();
			system("pause");
			system("cls");
			break;
			}
		}
	}
	system("pause");
}

