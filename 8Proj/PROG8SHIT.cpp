/*// Insertion Sort
	//copy data into array to be worked on
	for( int i=0; i<size; i++ ) data1_sorted[i] = data1[i];
	
	time(&start);
	insertionSort(data1_sorted, size, numComps, numSwaps);
	time(&end);
	dif = difftime (end,start);
	
	// Save
	fout.open("10_insertion_sorted");
	for( int i=0; i<size; i++ ) fout << data1_sorted[i] << endl;
	fout.close();
	fout.open("10_insertion_status");
		fout << "CPU Time              : " << dif << endl
			<< "Number of Comparisions: " << numComps << endl
			<< "Number of Swaps       : " << numSwaps << endl;
	fout.close();
	numComps = 0;
	numSwaps = 0;*/
