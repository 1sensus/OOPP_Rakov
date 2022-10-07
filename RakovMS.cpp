#pragma once
#include "Header.h"
#include"Obj_head.h"
#include"Container_head.h"


using namespace std;


int main()	
{
	setlocale(LC_ALL, "ru");
	unordered_map<int, RMS_obj> obj_umap = {};
	int var=-1;
	while (var != 0)
	{
		Print_menu();
		switch (var = get_var())
		{
		case 1:
			{
			system("cls");
			Container::Add_obj(obj_umap);
			system("pause");
			system("cls");			
			break;
			}
		case 2:
			{
			system("cls");
			if (obj_umap.empty())cout << "Список пуст"<<endl;
			Container::Print_all(obj_umap);
			system("pause");
			system("cls");
			break;
			}
		case 3:
			{
			system("cls");
			Container::File_reader(obj_umap);
			system("pause");
			system("cls");
			break;
			}
		case 4:
			{
			system("cls");
			Container::File_outer(obj_umap);
			system("pause");
			system("cls");
			break;
			}
		case 5:
			{
			system("cls");
			int var5 = -1;
			while (var5 != 0)
			{
				cout << "1.Очистить все" << endl << "2.Очистить диапозон" <<endl<<"0.Назад"<< endl;
				switch (var5=get_var())
				{
				case 1:
					{
					system("cls");
					Container::Delete_all(obj_umap);					
					system("pause");
					system("cls");
					break;
					}
				case 2:
					{
						system("cls");
						Container::Delete_diap(obj_umap);
						system("pause");
						system("cls");
						break;
					}
				}
			}
			system("pause");
			system("cls");
			break;
			}
		}
	}
	system("pause");
}

