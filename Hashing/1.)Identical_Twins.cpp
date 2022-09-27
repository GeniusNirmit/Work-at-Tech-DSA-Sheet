//Problem Statement:-https://workat.tech/problem-solving/practice/identical-twins

int getIdenticalTwinsCount(vector<int> &arr) {
	int maximum = arr[0];
	int n = arr.size();
	
	//Found maximum of the given array
	for(int i=0 ; i<n ; i++)
	{
		if(arr[i] > maximum)
			maximum = arr[i];
	}

	//Initializes a hash table with zero 
	int hash_table[maximum] = {0};
	int counter = 0;
	
	//Iterated a for loop for creating a hash table
	for(int i=0 ; i<n ; i++)
	{
		hash_table[arr[i]-1]++;
	}

	//For making pairs from the hash table
	for(int i=0 ; i<maximum; i++)
	{
		if(hash_table[i]>=2)
			counter = counter + (hash_table[i]*(hash_table[i]-1))/2;
	}
	return counter;
}



//According to me, this is the optimal solution of the given problem statement among various approaches.
//Another approach is Linear Search


// int getIdenticalTwinsCount(vector<int> &arr) {
//    	int counter = 0;
//        for (int i=0;i<arr.size();i++) 
//        {
//        		for (int j=i+1;j<arr.size();j++) 
//        		{
//            		if (arr[i] == arr[j]) 
//                		counter;
//	       	    }
//	      }
//    return counter;
// }