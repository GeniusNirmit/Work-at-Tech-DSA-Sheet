//Problem Statement/:-https://workat.tech/problem-solving/practice/negative-numbers-in-sorted-array


//Two ways to search a particular element

//1.) Optimal way is Binary Search with O(log n) time complexity.
int getNegativeNumbersCount(vector<int> &arr) {
	if(arr[0]>=0)
		return 0;
	else if(arr[arr.size()-1]<0)
		return arr.size();
	else
	{
		int l=0,h=arr.size()-1,mid;
		while(l<h)
		{
			mid=(l+h)/2;
			if(arr[mid]<0 && arr[mid+1]>=0)
				return mid+1;
			else if(arr[mid]>=0 && arr[mid+1]>=0)
				h=mid;
			else
				l=mid+1;
		}
	}
}

//2.) Another solution is Linear Search with O(n) time complexity
int getNegativeNumbersCount(vector<int> &arr) {
	int counter=0;
	for(int i=0;i<arr.size();i++)
	{
		if(arr[i]<0)
			counter++;
		else
			return counter;
	}
}