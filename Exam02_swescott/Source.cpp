//Author: Sara Wescott // I promise I did not search the web or access any material that would violate the exam agreements. ...I didn't see a copy paste agreement on your code... so I wrote my own.

#include <iostream>
using namespace std;

int** fillArray(unsigned int, unsigned int)
{
	
	int** array1 = new int*[int][int];

	return array1;
}

void deleteArray(int** list, int parameter)
{
	
	for (int i = 0; i < parameter; i++)
	{
		delete[] list[i];

	}
}

//Don't change main()! It tests your code.
int main()
{
	int nR, nC; //Number of rows and columns
	cout << "How many rows? ";
	cin >> nR;
	cout << "How many cols? ";
	cin >> nC;

	//Create the array!
	int** myArray = fillArray(nR, nC);

	//Print the array to the screen!
	for (int i = 0; i < nR; i++) {
		for (int j = 0; j < nC; j++)
			cout << myArray[i][j] << " ";
		cout << endl;
	}

	//DESTROY!!!!
	deleteArray(myArray, nR);

	//The end! Ta da!
	return 0;
}

int** fillArray(unsigned int numRows, unsigned int numCols)
{
	int** My2DArray;
	//Dynamically allocate an array of pointers to ints. Hint: You can dynamically
	//allocate the array by saying you want a new int*[<size>], where
	//<size> is the number of rows in this case.
	//<=== PUT YOUR CODE HERE!

	My2DArray = new int*[numRows];
	

	//Allocates an array of integers to each row. (This creates the columns!)
	//You fill in the blanks.


	for (int i = 0; i < numRows; i++) 
	{
		//Under this comment put a line of code to 1) allocate the array of ints
		//and 2) assign it to the current row of your array.
		int* list = new int[numCols]; //<=== PUT YOUR CODE HERE!
		int p;
		cout << "Enter " << numCols << "numbers. " << endl;
		for (int h = 0; h < numRows; h++)
		{
			cin >> p; 
			My2DArray[i][h] = p;
		}
		
		//The code below reads a number into each location in the 2D array.

		for (int j = 0; j < numCols; j++) {
			cout << "Number at position " << i << "," << j << "? ";
			cin >> My2DArray[i][j];
		}
	}
	return My2DArray;
}

void deleteArray(int** A, int size)
{
	for (int i = 0; i < size; i++)
	{
		delete [] A[i];

	}
}