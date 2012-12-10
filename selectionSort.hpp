#ifndef SELECTIONSORT_HPP
#define SELECTIONSORT_HPP

void swapsel( int &a, int &b )
{
	int tmp = a;
	a = b;
	b = tmp;
}

int minIndex( int values[], int startIndex, int endIndex, int &comps )
{
	int indexOfMin = startIndex;
	
	for( int ndex = startIndex+1; ndex<=endIndex; ndex++ )
	{
		if( values[ndex] < values[indexOfMin] )
		{
			indexOfMin = ndex;
		}
		comps++;
	}
	
	return indexOfMin;
}

void selectionSort( int values[], int numValues, int &comps, int &swaps )
{
	int endIndex = numValues-1;
	
	for( int current=0; current<endIndex; current++ )
	{
		swapsel( values[current], values[minIndex(values, current, endIndex, comps)] );
		swaps++;
	}
}

#endif
