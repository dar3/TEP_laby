
#include <iostream>
#include "Lista1_zad1.h"
using namespace std;

void print_table(int* table, int size) {

    for (int index = 0; index < size; index++)
    {
        cout << table[index] << " ";
    }
   cout << endl;
}

void v_alloc_table_fill_34(int iSize) {

    if (iSize < 0) {
        return ;
    }
    else
    {
        int* table_of_ints;
        table_of_ints = new int[iSize];

        for (int index = 0; index < iSize; index++)
        {
            table_of_ints[index] = 34;
        }

        print_table(table_of_ints, iSize);

        delete[] table_of_ints;
    }

    

};



int main()
{
    int size = 3;

    v_alloc_table_fill_34(size);  

    return 0;
};

/*
int main()
{

    int size = 3;
    if (size < 0) {
        return 1;
    }

    else {
        v_alloc_table_fill_34(size);
    }


    return 0;
};

*/



