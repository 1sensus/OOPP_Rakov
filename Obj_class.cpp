#pragma once
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <fstream>
#include<unordered_map>
#include"Header.h"
#include"Obj_head.h"
using namespace std;


	int RMS_obj::max_id = -1;
	RMS_obj::RMS_obj(){ id = -1; name = ""; age = -1; sex = ""; }
	void RMS_obj:: Delete_obj() { for (); }
	int RMS_obj::Get_id()const { return id; }
	string RMS_obj::Get_name()const {return name;}
	int RMS_obj::Get_age() const {return age; }
	string RMS_obj::Get_sex()const { return sex; }
	void RMS_obj::Set_id(int n_id) { id = n_id; }
	void RMS_obj::Set_name(string n_name) { name = n_name; }
	void RMS_obj::Set_age(int n_age) { age = n_age; }
	void RMS_obj::Set_sex(string n_sex) { sex = n_sex; }
	void RMS_obj::Print_cout() { cout<<"Id: "<<id<< "\t| Name: " << name << "\t| Age: " << age << "\t| Sex: " << sex << endl; }
	

