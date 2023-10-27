#pragma once

#include <string>
using namespace std;

class CTable
{
private:
    string s_name;
    int* table;
    int i_table_len;
    int* pc_0;
    int* pc_1;
   
public:
    CTable();

    CTable(string sName, int iTableLen);

    CTable(const CTable& pcOther);

    ~CTable();

    void vSetName(string sName);

    int iGetSize();

    bool bSetNewSize(int iTableLen);

    CTable* pcClone();

    CTable allocate(int xSize);

    CTable* pc_copier();

    CTable* allocate();
};

const string def_const_text = "bezp: ";
const string param_const_text = "parametr: ";
const string copy_const_text = "kopiuj: ";
const string destroy_text = "usuwam: ";
const string def_s_name = "default";
const int def_table_len = 5;

void v_mod_tab(CTable* pcTab, int iNewSize);
void v_mod_tab(CTable cTab, int iNewSize);
// allocate(int xSize);
void C_orig_copy(int* pc_0, int* pc_1);
CTable* CopyCTable(const CTable& orig);
CTable allocate(int xSize);
CTable vCopy(CTable** pc_0, CTable** pc_1);


