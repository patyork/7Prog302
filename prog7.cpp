//#include "bubbleSort.hpp"
//#include "selectionSort.hpp"
#include "insertionSort.hpp"

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	// initialize random seed
  	srand ( time(NULL) );
  	
	int size = 20, numComps=0, numSwaps=0;
	int data[size];
	
	cout << "Before: ";
	
	// Populate and display data
	for( int i=0; i<size; i++ )
	{
		data[i] = rand() % 99 + 1;	//random between 1 and 99
		
		//Display
		cout << data[i] << " ";
	}
	
	cout << endl << "After : ";
	
	// Bubble sort
	//////bubbleSort(data, size, numComps, numSwaps);
	
	// Selection sort
	//////selectionSort(data, size, numComps, numSwaps);
	
	// Insertion Sort
	insertionSort(data, size, numComps, numSwaps);
	
	
	
	// Display Sorted Data
	for( int i=0; i<size; i++)
		cout << data[i] << " ";
		
	cout << endl
		<< "Comparisons: " << numComps << endl
		<< "Swaps      : " << numSwaps << endl<< endl;
	
	
	return 0;
}
