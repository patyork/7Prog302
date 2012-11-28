#ifndef BUBBLESORT_HPP
#define BUBBLESORT_HPP

void swap( int &a, int &b )
{
	int tmp = a;
	a = b;
	b = tmp;
}

void bubbleUp( int values[], int startIndex, int endIndex, int &comps, int &swaps, bool &sorted )
{
	sorted = true;
	for( int index = endIndex; index > startIndex; index-- )
	{
		if( values[index] < values[index-1] )
		{
			swap(values[index], values[index-1]);
			swaps++;
			sorted=false;
		}
		comps++;
	}
}

void bubbleSort( int values[], int numValues, int &comps, int &swaps)
{
	int current=0;
	bool isSorted = false;
	
	while(current < numValues-1 && !isSorted)
	{
		bubbleUp(values, current, numValues-1, comps, swaps, isSorted);
		current++;
	}
}

#endif
