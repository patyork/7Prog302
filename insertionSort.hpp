#ifndef INSERTIONSORT_HPP
#define INSERTIONSORT_HPP

void swap( int &a, int &b )
{
	int tmp = a;
	a = b;
	b = tmp;
}

void insertItem( int values[], int start, int end, int &comps, int &swaps )
{
	bool finished = false;
	int current = end;
	bool moreToSearch = (current != start);
	
	while( moreToSearch && !finished)
	{
		if( values[current] < values[current-1] )
		{
			swap( values[current], values[current-1] );
			swaps++;
			current--;
			moreToSearch = (current != start);
		}
		else finished = true;
		comps++;
	}
}

void insertionSort( int values[], int numValues, int &comps, int &swaps )
{
	for( int count=0; count<numValues; count++ )
		insertItem(values, 0, count, comps, swaps);
}

#endif
