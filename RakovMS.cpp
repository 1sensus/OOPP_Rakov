#include <iostream>
#include <string>
#include <algorithm>
#include "Obj_class.cpp";


using namespace std;

void Print_menu() 
{
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
	RMS_obj a("kir",1,"m");
	RMS_obj a1("rik", 1, "m");
	int var=-1;
	while (var != 0)
	{
		Print_menu();
		var = get_var();
		switch (var)
		{
		case 1:
			{
			
			break;
			}
		case 2:
			{
			a.Print_cout();
			a1.Print_cout();
			break;
			}
		}
	}
	system("pause");
}

