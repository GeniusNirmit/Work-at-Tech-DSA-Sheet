//Problem Statement/:-https://workat.tech/problem-solving/practice/insert-position-in-sorted-array	


//Two ways to search a particular element

//1.) Optimal way is Binary Search with O(log n) time complexity.
int getInsertPosition(vector<int> &arr, int key) {
	if(key<arr[0])
		return 0;
	else if(key>=arr[arr.size()-1])
		return arr.size();
	else
	{
		int l=0,h=arr.size()-1,mid;
		while(l<h)
		{
			mid=(l+h)/2;
			if(arr[mid]<key)
				l=mid+1;
			else
				h=mid;
		}
		return l;
	}
}

//2.) Another solution is Linear Search with O(n) time complexity
int getInsertPosition(vector<int> &arr, int key) {
   int index=-1;
   for (int i=0;i<arr.size();i++) 
   	{
    	if (arr[i]==key) 
           	return i;
       	if(arr[i]<key) 
           	index=i;
   	}
   	return index+1;
}