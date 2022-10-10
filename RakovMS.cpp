#pragma once
#include "Header.h"
#include"RMS_Obj_head.h"
#include"RMS_Container_head.h"


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
			RMS_Container::Add_obj(obj_umap);
			system("pause");
			system("cls");			
			break;
			}
		case 2:
			{
			system("cls");
			if (obj_umap.empty())cout << "Список пуст"<<endl;
			RMS_Container::Print_all(obj_umap);
			system("pause");
			system("cls");
			break;
			}
		case 3:
			{
			system("cls");
			for(int i=0;i<10;i++)// // //
			RMS_Container::File_reader(obj_umap);
			system("pause");
			system("cls");
			break;
			}
		case 4:
			{
			system("cls");
			RMS_Container::File_outer(obj_umap);
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
					RMS_Container::Delete_all(obj_umap);					
					system("pause");
					system("cls");
					break;
					}
				case 2:
					{
						system("cls");
						RMS_Container::Delete_diap(obj_umap);
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
		case 6:
		{
			RMS_obj obj1;
			RMS_obj obj2;
			RMS_obj obj3;
			RMS_obj obj4;
		}
		}
	}
	system("pause");
}

