#include <iostream>
#include "Constant.h"
#include "CTable.h"

using namespace std;

int main()
{
    int size = 3;

    cout << v_alloc_table_fill_34(size) << endl;
   
	int** pi_table;
	int iSizeX = 5;
	int iSizeY = 3;

	cout << b_alloc_table_2_dim(&pi_table, iSizeX, iSizeY) << endl;
	cout << b_dealloc_table_2_dim(pi_table, iSizeX, iSizeY) << endl;

    
    CTable c_tab;
    c_tab.vSetName("my_table");
    c_tab.bSetNewSize(10);
    
    

    CTable c_static_obj;
    CTable *pc_dynamic_obj_copy;
    pc_dynamic_obj_copy = new CTable(c_static_obj);
    CTable c_static_obj_copy(c_static_obj);

    CTable* pc_new_tab = c_tab.pcClone();

   

    

   // CTable c_orig(5); 
    

   
    int pc_0 = 3;
    int pc_1 = 5;



    return 0;
};