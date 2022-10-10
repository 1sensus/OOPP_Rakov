#pragma once
#include "RMS_Obj_head.h"
class RMS_Container {
public:
	unordered_map<int, RMS_obj&> obj_umap;
	static void Add_obj(unordered_map<int, RMS_obj>& obj_umap);
	static void Print_all(unordered_map<int, RMS_obj>& obj_umap);
	static void File_outer(unordered_map<int, RMS_obj>& obj_umap);
	static void File_reader(unordered_map<int, RMS_obj>& obj_umap);
	static void Delete_diap(unordered_map<int, RMS_obj>& obj_umap);
	static void Delete_all(unordered_map<int, RMS_obj>& obj_umap);
};
