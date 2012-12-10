#ifndef QUICKSORT_HPP
#define QUICKSORT_HPP


void swapquick( int &a, int &b )
{
	int tmp = a;
	a = b;
	b = tmp;
}

//Quicksort, Iterative
void quickSort( int A[], int left, int right, int &comps, int &swaps )
{
  	int I, J, stack = 0, pivot;
  	int ST[100000] = { 0 }; //uses 20 with N=25,000 and range of 0-999
                                                 
  	while(1)
  	{
    		while(left >= right)
    		{
      		if(stack != 0)
      		{
          		right = ST[stack];         
          		left = ST[stack - 1]; 
          		stack -= 2;
        		}
        		else return;    //we're done
      	}
      	pivot = A[left]; 
      	I = left+1;    //forward loop counter //was left + 1
      	J = right+1;   //backward loop counter //was right + 1
     
      	/* these iterators are sooo incredibly touchy */
      	do
      	{
        		while(A[--J] > pivot);    //Touchy, Touchy!!  
        		while(A[I] < pivot) I++;
 
        		if(J > I)
        		{
          		swapquick(A[I], A[J]);
          		swaps++;
        		}
        		comps++;
      	} while(J > I);
 
      	A[left] = A[J];
      	A[J] = pivot;
                                     
      	if((J - left) < (right - J))  //take the smallest sub array first
        		ST[stack + 1] = J + 1;
                                           
      	if(ST[stack + 1] == J + 1)
      	{ 
        		ST[stack + 2] = right; 
        		right = J - 1; 
      	}
      	else
      	{
        		ST[stack + 1] = left; 
        		ST[stack + 2] = J - 1; 
        		left = J + 1;
      	}
      	stack = stack + 2;
                                           
    	}
}

#endif
