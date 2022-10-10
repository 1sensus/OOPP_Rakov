#pragma once
#include <iterator>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <fstream>
#include<unordered_map>
#include"RMS_Obj_head.h"
#include"RMS_Container_head.h"
#include"Header.h"
using namespace std;

void RMS_Container::Add_obj(unordered_map<int, RMS_obj>& obj_umap)
{
	RMS_obj obj;
	obj.Set_id(++RMS_obj::max_id);
	do
	{
		cout << "¬ведите возраст(=>0)" << endl;
		obj.Set_age(get_var());
	} while (obj.Get_age() < 0);
	cout << "¬ведите »м€" << endl;
	string s;
	cin >> s;
	obj.Set_name(s);
	cout << "¬ведите пол" << endl;
	cin >> s;
	obj.Set_sex(s);
	obj_umap.emplace(obj.Get_id(), obj);
}
void RMS_Container::Print_all(unordered_map<int, RMS_obj>& obj_umap) 
{
	for (auto& obj : obj_umap)
	{
		obj.second.Print_cout();
	}
}
void RMS_Container::File_outer(unordered_map<int, RMS_obj>& obj_umap)
{
	unordered_map<int, RMS_obj>::iterator it = obj_umap.begin();
	fstream file_out;
	cout << "¬ведите название файла дл€ сохранени€" << endl;
	string file;
	cin.ignore();
	getline(cin, file);
	size_t check = file.find(".txt");
	if (check == -1) file += ".txt";
	file_out.open(file, fstream::out);
	if (!file_out.is_open())
	{
		cout << "ќшибка!!!" << endl;
	}
	else
	{
		file_out << RMS_obj::max_id-1 << endl;
		for (;it!=obj_umap.end();it++) 
		{
			file_out << it->second;
		}

	}
	file_out.close();
}
void RMS_Container:: File_reader(unordered_map<int, RMS_obj>& obj_umap)
{
	ifstream read_file;
	cout << "¬ведите название файла дл€ чтени€" << endl;
	string file="xd";
	//cin.ignore();
	//getline(cin, file);
	size_t cheke = file.find(".txt");
	if (cheke == -1) file += ".txt";
	read_file.open(file, ifstream::in);
	if (!read_file.is_open()) { cout << "ќшибка!!!"; }
	else
	{
		int max_id_f;
		read_file >> max_id_f;
		while (!read_file.eof())
		{
			for (int i = 1; i <= max_id_f+1; ++i)
			{
				RMS_obj obj;
				read_file >> obj;
				obj.Set_id(RMS_obj::max_id + i);
				obj_umap.emplace(obj.Get_id(), obj);
			}
			RMS_obj::max_id += max_id_f + 1;
			break;
		}cout << "‘айл считан" << endl; read_file.close();
	}
}
void RMS_Container::Delete_diap(unordered_map<int, RMS_obj>& obj_umap)
{
	unordered_map<int, RMS_obj>::iterator it = obj_umap.begin();
	cout << "¬ведите левую гранцу диапозона удалени€" << endl;
	int l_bord = get_var();
	cout << "¬ведите правую гранцу диапозона удалени€" << endl;
	int r_bord = get_var();
	while (l_bord > r_bord)
	{
		cout << "ќшибка ввода" << endl;
		cout << "¬ведите левую гранцу диапозона удалени€" << endl;
		int l_bord = get_var();
		cout << "¬ведите правую гранцу диапозона удалени€" << endl;
		int r_bord = get_var();
	}
	for (int i = l_bord; l_bord <= r_bord; l_bord++)
	{
		if (obj_umap.find(l_bord)!=obj_umap.end())
		{
			//obj_umap[l_bord].Delete_obj();
			obj_umap.erase(l_bord);
		};
	}
}
void RMS_Container::Delete_all(unordered_map<int, RMS_obj>& obj_umap)
{
	obj_umap.clear();
}