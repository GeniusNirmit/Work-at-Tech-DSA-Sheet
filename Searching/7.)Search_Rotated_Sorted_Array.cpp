//Problem Statement/:-https://workat.tech/problem-solving/practice/search-rotated-array


//Two ways to search a particular element


//1.) Optimal way is Binary Search with O(log n) time complexity.
int getElementIndex(vector<int> &a, int target) {
	int max=a[0];
	for(int i=0;i<a.size();i++)
	{
		if(max<a[i])
			max=a[i];
	}
	if(max<target)
		return -1;
	else
	{
		int l=0,h=a.size(),mid;
		while(l<h)
		{
			mid=(l+h)/2;
			if(a[mid]==target)
				return mid;
			else if(a[mid]>target)
				h=mid-1;
			else
				l=mid+1;
		}
	}
}

//2.) Another solution is Linear Search with O(n) time complexity
int getElementIndex(vector<int> &a, int target) {
	for(int i=0;i<a.size();i++)
	{
		if(a[i]==target)
			return i;
	}
	return -1;
}