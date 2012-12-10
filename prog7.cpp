#include "bubbleSort.hpp"
#include "selectionSort.hpp"
#include "quickSort.hpp"
#include "mergeSort.hpp"

#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


using namespace std;

int main()
{
	// initialize random seed
  	srand ( time(NULL) );
  	
  	time_t start,end;
  	double dif;
  	
	int size = 10, numComps=0, numSwaps=0;
	ofstream fout;
	
	
		fout.open("10_unsorted");
		
		int data1[size];
		int data1_sorted[size];
		
		// Populate and save data
		for( int i=0; i<size; i++ )
		{
			//data[i] = rand() % 8999 + 1000;	//random between 1000 and 9999
			data1[i] = rand() % 99 + 1;	//random between 1 and 99
		
			//Store
			fout << data1[i] << endl;
		}
		fout.close();
	
	
	
	
	
		// ------ Bubble Sort ------------
		//copy data into array to be worked on
		for( int i=0; i<size; i++ ) data1_sorted[i] = data1[i];
		
		time(&start);
		bubbleSort(data1_sorted, size, numComps, numSwaps);
		time(&end);
		dif = difftime (end,start);
	
		// Save
		fout.open("10_bubble_sorted");
		for( int i=0; i<size; i++ ) fout << data1_sorted[i] << endl;
		fout.close();
		fout.open("10_bubble_status");
			fout << "CPU Time              : " << dif << endl
				<< "Number of Comparisions: " << numComps << endl
				<< "Number of Swaps       : " << numSwaps << endl;
		fout.close();
		numComps = 0;
		numSwaps = 0;
		
		
		
		
		// -----Selection sort------------
		//copy data into array to be worked on
		for( int i=0; i<size; i++ ) data1_sorted[i] = data1[i];
		
		time(&start);
		selectionSort( data1_sorted, size, numComps, numSwaps );
		time(&end);
		dif = difftime (end,start);
		
		// Save
		fout.open("10_selection_sorted");
		for( int i=0; i<size; i++ ) fout << data1_sorted[i] << endl;
		fout.close();
		fout.open("10_selection_status");
			fout << "CPU Time              : " << dif << endl
				<< "Number of Comparisions: " << numComps << endl
				<< "Number of Swaps       : " << numSwaps << endl;
		fout.close();
		numComps = 0;
		numSwaps = 0;
		
		
		
		
		// ----------Quick Sort ----------------
		//copy data into array to be worked on
		for( int i=0; i<size; i++ ) data1_sorted[i] = data1[i];
		
		time(&start);
		quickSort(data1_sorted, 0, size-1, numComps, numSwaps );
		time(&end);
		dif = difftime (end,start);
		
		// Save
		fout.open("10_quick_sorted");
		for( int i=0; i<size; i++ ) fout << data1_sorted[i] << endl;
		fout.close();
		fout.open("10_quick_status");
			fout << "CPU Time              : " << dif << endl
				<< "Number of Comparisions: " << numComps << endl
				<< "Number of Swaps       : " << numSwaps << endl;
		fout.close();
		numComps = 0;
		numSwaps = 0;
		
		
		
		// ----------- Merge Sort -------------
		//copy data into array to be worked on
		for( int i=0; i<size; i++ ) data1_sorted[i] = data1[i];
		
		time(&start);
		mergeSort(size, data1_sorted, numSwaps, numComps);
		time(&end);
		dif = difftime (end,start);
		
		// Save
		fout.open("10_merge_sorted");
		for( int i=0; i<size; i++ ) fout << data1_sorted[i] << endl;
		fout.close();
		fout.open("10_merge_status");
			fout << "CPU Time              : " << dif << endl
				<< "Number of Comparisions: " << numComps << endl
				<< "Number of Swaps       : " << numSwaps << endl;
		fout.close();
		numComps = 0;
		numSwaps = 0;
	
		size *= 10;
		
		
		
		
		
		
		
		
		
		
		
		
		
		fout.open("100_unsorted");
		
		int data2[size];
		int data2_sorted[size];
		
		// Populate and save data
		for( int i=0; i<size; i++ )
		{
			data2[i] = rand() % 99 + 1;	//random between 1 and 99
		
			//Store
			fout << data2[i] << endl;
		}
		fout.close();
	
	
	
	
	
		// ------ Bubble Sort ------------
		//copy data into array to be worked on
		for( int i=0; i<size; i++ ) data2_sorted[i] = data2[i];
		
		time(&start);
		bubbleSort(data2_sorted, size, numComps, numSwaps);
		time(&end);
		dif = difftime (end,start);
	
		// Save
		fout.open("100_bubble_sorted");
		for( int i=0; i<size; i++ ) fout << data2_sorted[i] << endl;
		fout.close();
		fout.open("100_bubble_status");
			fout << "CPU Time              : " << dif << endl
				<< "Number of Comparisions: " << numComps << endl
				<< "Number of Swaps       : " << numSwaps << endl;
		fout.close();
		numComps = 0;
		numSwaps = 0;
		
		
		
		
		// -----Selection sort------------
		//copy data into array to be worked on
		for( int i=0; i<size; i++ ) data2_sorted[i] = data2[i];
		
		time(&start);
		selectionSort( data2_sorted, size, numComps, numSwaps );
		time(&end);
		dif = difftime (end,start);
		
		// Save
		fout.open("100_selection_sorted");
		for( int i=0; i<size; i++ ) fout << data2_sorted[i] << endl;
		fout.close();
		fout.open("100_selection_status");
			fout << "CPU Time              : " << dif << endl
				<< "Number of Comparisions: " << numComps << endl
				<< "Number of Swaps       : " << numSwaps << endl;
		fout.close();
		numComps = 0;
		numSwaps = 0;
		
		
		
		
		// ----------Quick Sort ----------------
		//copy data into array to be worked on
		for( int i=0; i<size; i++ ) data2_sorted[i] = data2[i];
		
		time(&start);
		quickSort(data2_sorted, 0, size-1, numComps, numSwaps );
		time(&end);
		dif = difftime (end,start);
		
		// Save
		fout.open("100_quick_sorted");
		for( int i=0; i<size; i++ ) fout << data2_sorted[i] << endl;
		fout.close();
		fout.open("100_quick_status");
			fout << "CPU Time              : " << dif << endl
				<< "Number of Comparisions: " << numComps << endl
				<< "Number of Swaps       : " << numSwaps << endl;
		fout.close();
		numComps = 0;
		numSwaps = 0;
		
		
		
		// ----------- Merge Sort -------------
		//copy data into array to be worked on
		for( int i=0; i<size; i++ ) data2_sorted[i] = data2[i];
		
		time(&start);
		mergeSort(size, data2_sorted, numSwaps, numComps);
		time(&end);
		dif = difftime (end,start);
		
		// Save
		fout.open("100_merge_sorted");
		for( int i=0; i<size; i++ ) fout << data2_sorted[i] << endl;
		fout.close();
		fout.open("100_merge_status");
			fout << "CPU Time              : " << dif << endl
				<< "Number of Comparisions: " << numComps << endl
				<< "Number of Swaps       : " << numSwaps << endl;
		fout.close();
		numComps = 0;
		numSwaps = 0;
	
		size *= 10;
		
		
		
		
		
		
		
		
		
		
		
		fout.open("1000_unsorted");
		
		int data3[size];
		int data3_sorted[size];
		
		// Populate and save data
		for( int i=0; i<size; i++ )
		{
			data3[i] = rand() % 99 + 1;	//random between 1 and 99
		
			//Store
			fout << data3[i] << endl;
		}
		fout.close();
	
	
	
	
	
		// ------ Bubble Sort ------------
		//copy data into array to be worked on
		for( int i=0; i<size; i++ ) data3_sorted[i] = data3[i];
		
		time(&start);
		bubbleSort(data3_sorted, size, numComps, numSwaps);
		time(&end);
		dif = difftime (end,start);
	
		// Save
		fout.open("1000_bubble_sorted");
		for( int i=0; i<size; i++ ) fout << data3_sorted[i] << endl;
		fout.close();
		fout.open("1000_bubble_status");
			fout << "CPU Time              : " << dif << endl
				<< "Number of Comparisions: " << numComps << endl
				<< "Number of Swaps       : " << numSwaps << endl;
		fout.close();
		numComps = 0;
		numSwaps = 0;
		
		
		
		
		// -----Selection sort------------
		//copy data into array to be worked on
		for( int i=0; i<size; i++ ) data3_sorted[i] = data3[i];
		
		time(&start);
		selectionSort( data3_sorted, size, numComps, numSwaps );
		time(&end);
		dif = difftime (end,start);
		
		// Save
		fout.open("1000_selection_sorted");
		for( int i=0; i<size; i++ ) fout << data3_sorted[i] << endl;
		fout.close();
		fout.open("1000_selection_status");
			fout << "CPU Time              : " << dif << endl
				<< "Number of Comparisions: " << numComps << endl
				<< "Number of Swaps       : " << numSwaps << endl;
		fout.close();
		numComps = 0;
		numSwaps = 0;
		
		
		
		
		// ----------Quick Sort ----------------
		//copy data into array to be worked on
		for( int i=0; i<size; i++ ) data3_sorted[i] = data3[i];
		
		time(&start);
		quickSort(data3_sorted, 0, size-1, numComps, numSwaps );
		time(&end);
		dif = difftime (end,start);
		
		// Save
		fout.open("1000_quick_sorted");
		for( int i=0; i<size; i++ ) fout << data3_sorted[i] << endl;
		fout.close();
		fout.open("1000_quick_status");
			fout << "CPU Time              : " << dif << endl
				<< "Number of Comparisions: " << numComps << endl
				<< "Number of Swaps       : " << numSwaps << endl;
		fout.close();
		numComps = 0;
		numSwaps = 0;
		
		
		
		// ----------- Merge Sort -------------
		//copy data into array to be worked on
		for( int i=0; i<size; i++ ) data3_sorted[i] = data3[i];
		
		time(&start);
		mergeSort(size, data3_sorted, numSwaps, numComps);
		time(&end);
		dif = difftime (end,start);
		
		// Save
		fout.open("1000_merge_sorted");
		for( int i=0; i<size; i++ ) fout << data3_sorted[i] << endl;
		fout.close();
		fout.open("1000_merge_status");
			fout << "CPU Time              : " << dif << endl
				<< "Number of Comparisions: " << numComps << endl
				<< "Number of Swaps       : " << numSwaps << endl;
		fout.close();
		numComps = 0;
		numSwaps = 0;
	
		size *= 10;
		
		
		
		
		
		
		
		
		fout.open("10000_unsorted");
		
		int data4[size];
		int data4_sorted[size];
		
		// Populate and save data
		for( int i=0; i<size; i++ )
		{
			data4[i] = rand() % 99 + 1;	//random between 1 and 99
		
			//Store
			fout << data4[i] << endl;
		}
		fout.close();
	
	
	
	
	
		// ------ Bubble Sort ------------
		//copy data into array to be worked on
		for( int i=0; i<size; i++ ) data4_sorted[i] = data4[i];
		
		time(&start);
		bubbleSort(data4_sorted, size, numComps, numSwaps);
		time(&end);
		dif = difftime (end,start);
	
		// Save
		fout.open("10000_bubble_sorted");
		for( int i=0; i<size; i++ ) fout << data4_sorted[i] << endl;
		fout.close();
		fout.open("10000_bubble_status");
			fout << "CPU Time              : " << dif << endl
				<< "Number of Comparisions: " << numComps << endl
				<< "Number of Swaps       : " << numSwaps << endl;
		fout.close();
		numComps = 0;
		numSwaps = 0;
		
		
		
		
		// -----Selection sort------------
		//copy data into array to be worked on
		for( int i=0; i<size; i++ ) data4_sorted[i] = data4[i];
		
		time(&start);
		selectionSort( data4_sorted, size, numComps, numSwaps );
		time(&end);
		dif = difftime (end,start);
		
		// Save
		fout.open("10000_selection_sorted");
		for( int i=0; i<size; i++ ) fout << data4_sorted[i] << endl;
		fout.close();
		fout.open("10000_selection_status");
			fout << "CPU Time              : " << dif << endl
				<< "Number of Comparisions: " << numComps << endl
				<< "Number of Swaps       : " << numSwaps << endl;
		fout.close();
		numComps = 0;
		numSwaps = 0;
		
		
		
		
		// ----------Quick Sort ----------------
		//copy data into array to be worked on
		for( int i=0; i<size; i++ ) data4_sorted[i] = data4[i];
		
		time(&start);
		quickSort(data4_sorted, 0, size-1, numComps, numSwaps );
		time(&end);
		dif = difftime (end,start);
		
		// Save
		fout.open("10000_quick_sorted");
		for( int i=0; i<size; i++ ) fout << data4_sorted[i] << endl;
		fout.close();
		fout.open("10000_quick_status");
			fout << "CPU Time              : " << dif << endl
				<< "Number of Comparisions: " << numComps << endl
				<< "Number of Swaps       : " << numSwaps << endl;
		fout.close();
		numComps = 0;
		numSwaps = 0;
		
		
		
		// ----------- Merge Sort -------------
		//copy data into array to be worked on
		for( int i=0; i<size; i++ ) data4_sorted[i] = data4[i];
		
		time(&start);
		mergeSort(size, data4_sorted, numSwaps, numComps);
		time(&end);
		dif = difftime (end,start);
		
		// Save
		fout.open("10000_merge_sorted");
		for( int i=0; i<size; i++ ) fout << data4_sorted[i] << endl;
		fout.close();
		fout.open("10000_merge_status");
			fout << "CPU Time              : " << dif << endl
				<< "Number of Comparisions: " << numComps << endl
				<< "Number of Swaps       : " << numSwaps << endl;
		fout.close();
		numComps = 0;
		numSwaps = 0;
	
		size *= 10;
		
		
		
		
		
		
		
		
		
		
		
		fout.open("100000_unsorted");
		
		int data5[size];
		int data5_sorted[size];
		
		// Populate and save data
		for( int i=0; i<size; i++ )
		{
			data5[i] = rand() % 99 + 1;	//random between 1 and 99
		
			//Store
			fout << data5[i] << endl;
		}
		fout.close();
	
	
	
	
	
		// ------ Bubble Sort ------------
		//copy data into array to be worked on
		for( int i=0; i<size; i++ ) data5_sorted[i] = data5[i];
		
		time(&start);
		bubbleSort(data5_sorted, size, numComps, numSwaps);
		time(&end);
		dif = difftime (end,start);
	
		// Save
		fout.open("100000_bubble_sorted");
		for( int i=0; i<size; i++ ) fout << data5_sorted[i] << endl;
		fout.close();
		fout.open("100000_bubble_status");
			fout << "CPU Time              : " << dif << endl
				<< "Number of Comparisions: " << numComps << endl
				<< "Number of Swaps       : " << numSwaps << endl;
		fout.close();
		numComps = 0;
		numSwaps = 0;
		
		
		
		
		// -----Selection sort------------
		//copy data into array to be worked on
		for( int i=0; i<size; i++ ) data5_sorted[i] = data5[i];
		
		time(&start);
		selectionSort( data5_sorted, size, numComps, numSwaps );
		time(&end);
		dif = difftime (end,start);
		
		// Save
		fout.open("100000_selection_sorted");
		for( int i=0; i<size; i++ ) fout << data5_sorted[i] << endl;
		fout.close();
		fout.open("100000_selection_status");
			fout << "CPU Time              : " << dif << endl
				<< "Number of Comparisions: " << numComps << endl
				<< "Number of Swaps       : " << numSwaps << endl;
		fout.close();
		numComps = 0;
		numSwaps = 0;
		
		
		
		
		// ----------Quick Sort ----------------
		//copy data into array to be worked on
		for( int i=0; i<size; i++ ) data5_sorted[i] = data5[i];
		
		time(&start);
		quickSort(data5_sorted, 0, size-1, numComps, numSwaps );
		time(&end);
		dif = difftime (end,start);
		
		// Save
		fout.open("100000_quick_sorted");
		for( int i=0; i<size; i++ ) fout << data5_sorted[i] << endl;
		fout.close();
		fout.open("100000_quick_status");
			fout << "CPU Time              : " << dif << endl
				<< "Number of Comparisions: " << numComps << endl
				<< "Number of Swaps       : " << numSwaps << endl;
		fout.close();
		numComps = 0;
		numSwaps = 0;
		
		
		
		// ----------- Merge Sort -------------
		//copy data into array to be worked on
		for( int i=0; i<size; i++ ) data5_sorted[i] = data5[i];
		
		time(&start);
		mergeSort(size, data5_sorted, numSwaps, numComps);
		time(&end);
		dif = difftime (end,start);
		
		// Save
		fout.open("100000_merge_sorted");
		for( int i=0; i<size; i++ ) fout << data5_sorted[i] << endl;
		fout.close();
		fout.open("100000_merge_status");
			fout << "CPU Time              : " << dif << endl
				<< "Number of Comparisions: " << numComps << endl
				<< "Number of Swaps       : " << numSwaps << endl;
		fout.close();
		numComps = 0;
		numSwaps = 0;
	
	
	return 0;
}
