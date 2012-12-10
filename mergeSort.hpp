#ifndef MERGESORT_HPP
#define MERGESORT_HPP

#include <iostream>
using namespace std;

void merge(int values[], int start, int mergeSize, int size, int &swaps, int &comps )
{
	int temp[100001];		// I couldn't find a better way to create the temp..

	int i=start,j=size,k=0;
	while( i < size && ( j <= mergeSize ) )
	{
		if( values[i] > values[j] )	//swap
		{
			temp[k] = values[j];
			k++;
			j++;
			swaps++;
		}
		else{				// copy
			temp[k] = values[i];
			k++;
			i++;
		}
		comps++;
	}
	while( i < size ) temp[k++]=values[i++];

	while( j <= mergeSize ) temp[k++]=values[j++];


	for(int index=0;index < k ; index=index+1)
		values[start++]=temp[index];		//copy into referenced array

}

void mergeSort(int size, int values[], int &swaps, int &comps)
{
	int mergeSize=2, start=0, i=0, midPoint=0;
	int lastSize=0;
	while(mergeSize < size) // loop by powers of 2
	{

		for( i=0; i < size; i=i+mergeSize )
		{
			if( (i+mergeSize) < size )
			{
				midPoint = i + mergeSize/2;
				merge( values, i, i+mergeSize-1, midPoint, swaps, comps );
			}
			else{
				midPoint = (i+size)/2;	// current iteration + size over 2 gives the new midpoint
				merge( values, i, size-1, midPoint+1, swaps, comps );
			}
			lastSize=i;	// continually update lastSize
		}		
		mergeSize=mergeSize * 2 ;	// merge in powers of 2
	}
	merge( values, 0, size-1, lastSize, swaps, comps );
}


#endif
