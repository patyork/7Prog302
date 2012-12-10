//#include "bubbleSort.hpp"
//#include "selectionSort.hpp"
//#include "insertionSort.hpp"
//#include "quickSort.hpp"
#include "mergeSort.hpp"

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	// initialize random seed
  	srand ( time(NULL) );
  	
	int size = 32, numComps=0, numSwaps=0;
	int data[size];
	
	cout << "Before: ";
	
	// Populate and display data
	for( int i=0; i<size; i++ )
	{
		//data[i] = rand() % 8999 + 1000;	//random between 1000 and 9999
		data[i] = rand() % 99 + 1;	//random between 1 and 99
		//Display
		//cout << data[i] << " ";
	}
	
	cout << endl << "After : ";
	
	// Bubble 
	///bubbleSort(data, size, numComps, numSwaps);
	
	// Selection sort
	//selectionSort( data, size, numComps, numSwaps );
	
	// Insertion Sort
	//insertionSort(data, size, numComps, numSwaps);
	
	//quickSort(data, 0, size-1, numComps, numSwaps );
	mergeSort(size, data, numSwaps, numComps);
	
	
	
	// Display Sorted Data
	cout << endl << endl << endl;
	for( int i=0; i<size; i++)
		cout << data[i] << " ";
		
	cout << endl
		<< "Comparisons: " << numComps << endl
		<< "Swaps      : " << numSwaps << endl<< endl;
	
	
	return 0;
}
