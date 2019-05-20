
namespace Extension
{
	int* allocateIntMemory(int);

	int** allocateIntMatrixMemory(int, int*);

	int inputRowsCount();

	int* inputColumnsCount(int);

	int inputInt();

	void inputNonRectangularMatrix(int**, int, int*);

	void displayNonRectangularMatrix(int**, int, int*);

	void sort(int**,int**, int, int*);

	void qSort(int**, int, int*);

	void quickSort(int*, int);
}