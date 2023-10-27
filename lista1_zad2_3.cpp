#include <iostream>
#include "Constant.h"
using namespace std;


bool b_alloc_table_2_dim(int ***piTable, int iSizeX, int iSizeY) {

	if (iSizeX <= 0 || iSizeY <= 0 ) {
		return false;
	}
	else
	{
		*piTable = new int* [iSizeX];

		for (int index = 0; index < iSizeX; index++) {

			(*piTable)[index] = new int[iSizeY];
		}

		return true;
	}
};

bool b_dealloc_table_2_dim(int **piTable, int iSizeX, int iSizeY) {

	if (iSizeX <= 0 || iSizeY <= 0) {
		return false;
	}
	else
	{
		for (int index = 0; index < iSizeX; index++) 
		{
			delete[] piTable[index];
		}

		delete[] piTable;
		return true;
	}
	
};


/*

int main() {

	int** pi_table;
	int iSizeX = 5;
	int iSizeY = 3;

	b_alloc_table_2_dim(&pi_table, iSizeX, iSizeY);
	b_dealloc_table_2_dim(pi_table, iSizeX, iSizeY);
	

	return 0;
};

*/