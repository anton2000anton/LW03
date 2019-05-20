#include "iostream"
#include "Library.h"

using namespace std;


int* Extension::allocateIntMemory(int count)
{
	int* array = new int[count];
	return array;
}


int** Extension::allocateIntMatrixMemory(int arraySize, int* count)
{
	int** matrix = new int*[arraySize];

	for (int i = 0; i < arraySize; i++)
	{
		matrix[i] = new int[count[i]];
	}

	return matrix;
}


int Extension::inputInt()
{
	int number;
	cin >> number;
	return number;
}


int Extension::inputRowsCount()
{
	int count;
	cout << "Input count of rows you want in your matrix: ";
	cin >> count;
	return count;
}


int* Extension::inputColumnsCount(int rowsCount)
{
	int* array = new int(rowsCount);

	for (int i = 0; i < rowsCount; i++)
	{
		cout << "Enter count of columns in " << i + 1 << " row: ";
		cin >> array[i];
	}

	return array;
}


void Extension::inputNonRectangularMatrix(int** matrix, int rowsCount, int* columnsCount)
{
	for (int i = 0; i < rowsCount; i++)
	{
		cout << "Input elements in " << i + 1 << " row" << endl;

		for (int j = 0; j < columnsCount[i]; j++)
		{
			cout << j + 1 << " element: ";
			cin >> matrix[i][j];
		}
	}
}


void Extension::displayNonRectangularMatrix(int** matrix, int rowsCount, int* columnsCount)
{
	cout << endl;

	for (int i = 0; i < rowsCount; i++)
	{
		for (int j = 0; j < columnsCount[i]; j++)
		{
			if(matrix[i][j] != -842150451)
			{
				cout << " " << matrix[i][j] << " ";
			}
		}

		cout << endl;
	}
}


void Extension::qSort(int** matrix, int rowsCount, int* columnsCount)
{
	for (int i = 0; i < rowsCount; i++)
	{
		for (int j = 0; j < columnsCount[i]; j++)
		{
			quickSort(matrix[i], columnsCount[i]);
		}
	}
}


void Extension::sort(int** matrix, int** rematrix, int rowsCount, int* columnsCount)
{
	for (int i = 0; i < rowsCount; i++)
	{
		for (int j = 0; j < columnsCount[i]; j++)
		{
			if (!(matrix[i][j] % 2 == 0 && j % 2 == 0))
			{
				rematrix[i][j] = matrix[i][j];
			}
		}
	}
}


void Extension::quickSort(int* array, int size)
{
	int i = 0;
	int j = size - 1;
	int mid = array[size / 2];

	do
	{
		while (array[i] > mid)
		{
			i++;
		}

		while (array[j] < mid)
		{
			j--;
		}

		if (i <= j)
		{
			int tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
			i++;
			j--;
		}
	}

	while (i <= j);

	if (j > 0)
	{
		quickSort(array, j + 1);
	}

	if (i < size)
	{
		quickSort(&array[i], size - i);
	}
}
