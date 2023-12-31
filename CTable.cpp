#include <iostream>
#include "CTable.h"

using namespace std;


CTable::CTable()
{
    s_name = def_s_name;
    cout << def_const_text << "'" << s_name << "'" << endl;
    table = new int[def_table_len];
    i_table_len = def_table_len;
}

CTable::CTable(string sName, int iTableLen)
{
    if (iTableLen < 0) {
        iTableLen = def_table_len;
    }
    s_name = sName;
    cout << param_const_text << "'" << s_name << "'" << endl;
   
    table = new int[iTableLen];
    i_table_len = iTableLen;
   
}

CTable::CTable(const CTable &pcOther)
{
    
    s_name = pcOther.s_name + "_copy";
    i_table_len = pcOther.i_table_len;
    table = new int[pcOther.i_table_len];

    for (int index = 0; index < pcOther.i_table_len; index++)
    {
        table[index] = pcOther.table[index];
    }

    cout << copy_const_text << "'" << s_name << "'" << endl;
}


CTable* CTable::pcClone() {
    CTable* c_tab = new CTable(*this);
    return c_tab;
};

CTable::~CTable()
{
    cout << destroy_text << "'" << s_name << "'" << endl;
    delete table;
}

bool CTable::bSetNewSize(int iTableLen)
{
    if (iTableLen < 0) {
        return false;
    }
        
    else
    {
        i_table_len = iTableLen;
        int* table_temp = table;
        table = new int[iTableLen];

        for (int i = 0; i < i_table_len && i < iTableLen; i++)
        {
            table[i] = table_temp[i];
        }

        delete[] table_temp;
        return true;
    }
}

void CTable::vSetName(string sName) {
    s_name = sName;
}


void v_mod_tab(CTable* pcTab, int iNewSize)
{
    pcTab->bSetNewSize(iNewSize);

}

void v_mod_tab(CTable cTab, int iNewSize)
{
    cTab.bSetNewSize(iNewSize);
}



//modyfikacja

/*
void CTable::allocate(int xSize) {
    if (xSize < 0) {
        return;
    }

    int* newTable = new int[xSize]; // Tworzenie nowej tablicy o rozmiarze xSize

    if (table != nullptr) {
        int minSize = std::min(xSize, i_table_len); // Minimalny rozmiar do kopiowania
        for (int i = 0; i < minSize; i++) {
            newTable[i] = table[i]; // Kopiowanie danych z istniejącej tablicy
        }
        delete[] table; // Zwalnianie starej tablicy
    }

    table = newTable; // Przypisanie nowej tablicy
    i_table_len = xSize; // Ustawienie nowej długości tablicy
}
*/



