#pragma once
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <fstream>
#include<unordered_map>
using namespace std;

class RMS_obj {
private:
	int id;
	string name;
	int age;
	string sex;
public:
	static int max_id;
	RMS_obj();
	//void Delete_obj();
	int Get_id()const;
	string Get_name()const;
	int Get_age()const;
	string Get_sex()const;
	void Set_id(int n_id);
	void Set_name(string n_name);
	void Set_age(int n_age);
	void Set_sex(string n_sex);
	void Print_cout();
	friend istream& operator >> (istream& in, RMS_obj& obj);
	friend ostream& operator << (ostream& out, const RMS_obj& obj);
};
