//Problem Statement/:-https://workat.tech/problem-solving/practice/contains-element


//Two ways to search a particular element


//1.) Optimal way is Binary Search with O(log n) time complexity.
bool containsElement(vector<int> &arr, int key) {
	int l=0,h=arr.size()-1,mid;
	while(l<=h)
	{
		mid=(l+h)/2;
		if(arr[mid]==key)
			return true;
		else if(arr[mid]<key)
			l=mid+1;
		else
			h=mid-1;
	}
	return false;
}


//2.) Another solution is Linear Search with O(n) time complexity
bool containsElement(vector<int> &arr, int key) {
	for(int i=0;i<arr.size();i++)
	{
		if(arr[i]==key)
			return true;
	}
	return false;
}