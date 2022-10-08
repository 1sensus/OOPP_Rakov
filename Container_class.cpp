#pragma once
#include <iterator>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <fstream>
#include<unordered_map>
#include"Obj_head.h"
#include"Container_head.h"
#include"Header.h"
using namespace std;

void Container::Add_obj(unordered_map<int, RMS_obj>& obj_umap)
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
void Container::Print_all(unordered_map<int, RMS_obj>& obj_umap) 
{
	for (auto& obj : obj_umap)
	{
		obj.second.Print_cout();
	}
}
void Container::File_outer(unordered_map<int, RMS_obj>& obj_umap)
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
		size_t a = obj_umap.size();
		file_out << a << endl;
		file_out << RMS_obj::max_id << endl;
		for (;it!=obj_umap.end();it++) 
		{
			file_out << it->second;
		}

	}
	file_out.close();
}
void Container:: File_reader(unordered_map<int, RMS_obj>& obj_umap)
{
	ifstream read_file;
	cout << "¬ведите название файла дл€ чтени€" << endl;
	string file;
	cin.ignore();
	getline(cin, file);
	size_t cheke = file.find(".txt");
	if (cheke == -1) file += ".txt";
	read_file.open(file, ifstream::in);
	if (!read_file.is_open()) { cout << "ќшибка!!!"; }
	else
	{
		//obj_umap.clear();
		int kol_obj;
		read_file >> kol_obj;
		read_file >> RMS_obj::max_id;
		while (!read_file.eof())
		{
			for (int i = 0; i < kol_obj; ++i)
			{
				RMS_obj obj;
				read_file >> obj;
				obj_umap.emplace(obj.Get_id(), obj);
			}
			break;
		}cout << "‘айл считан" << endl; read_file.close();
	}
}
void Container::Delete_diap(unordered_map<int, RMS_obj>& obj_umap)
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
			obj_umap[l_bord].Delete_obj();
			obj_umap.erase(l_bord);
		};
	}
}
void Container::Delete_all(unordered_map<int, RMS_obj>& obj_umap)
{
	for (int i = 0; i != obj_umap.size(); i++)
	{
		if (obj_umap.find(i) != obj_umap.end())
		{
			obj_umap[i].Delete_obj();
		}
	}
	int a;
	obj_umap.clear();
		
}