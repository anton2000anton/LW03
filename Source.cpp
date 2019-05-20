#include "iostream"
#include "cmath"
#include "Library.h"

using namespace std;
using namespace Extension;

int main()
{
	int rowsCount = inputRowsCount();
	int* columnsCount = inputColumnsCount(rowsCount);
	int** matrix = allocateIntMatrixMemory(rowsCount, columnsCount);
	inputNonRectangularMatrix(matrix, rowsCount, columnsCount);

	cout << "Your matrix: ";
	displayNonRectangularMatrix(matrix, rowsCount, columnsCount);
		
	int** rematrix = allocateIntMatrixMemory(rowsCount, columnsCount);

	sort(matrix, rematrix, rowsCount, columnsCount);
	qSort(rematrix, rowsCount, columnsCount);

	cout << "Sorted matrix: ";
	displayNonRectangularMatrix(rematrix, rowsCount, columnsCount);

	system("pause");

	return 0;

}


