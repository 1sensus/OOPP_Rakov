#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


class RMS_obj {
	string name;
	int age;
	string sex;
	//string surname;
	//string country;
public:
	string Get_name() {return name;}
	int Get_age() {return age; }
	string Get_sex() { return sex; }
	void Set_name(string n_name) { name = n_name; }
	void Set_age(int n_age) { age = n_age; }
	void Set_sex(string n_sex) { sex = n_sex; }
	void Print_cout() { cout << "Name: " << name << "\t| Age: " << age << "\t| Sex: " << sex << endl; }
	RMS_obj(string n_name,int n_age,string n_sex)
	{
		name = n_name; age = n_age; sex = n_sex;
	}
	~RMS_obj()
	{
		cout << "delete " << name << endl;
	}

};
