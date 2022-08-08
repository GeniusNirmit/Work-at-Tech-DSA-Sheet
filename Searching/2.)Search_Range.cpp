//Problem Statement/:-https://workat.tech/problem-solving/practice/search-range


//Optimal Approach with O(log n) time complexity
vector<int> searchRange(vector<int> &arr, int key) {
	int i=0;
	vector<int> v;
	while(arr[i]!=key && i<=arr.size())
	{
		i++;
	}
	if(i>arr.size())
		v.push_back(-1);
	else
		v.push_back(i);
	i=arr.size()-1;
	while(arr[i]!=key && i>=0)
	{
		i--;
	}
	if(i<0)
		v.push_back(-1);
	else
		v.push_back(i);
	return v;
}

//Another approach with O(n) time complexity
vector<int> searchRange(vector<int> &arr, int key) {
   	int first=-1,last=-1;
   	for(int i=0;i<arr.size();i++) 
   	{
       	if(first==-1 && key==arr[i]) 
       	{
           	first=i;
       	}
       	if(key==arr[i]) 
       	{
           	last=i;
       	}
   	}
   	vector<int> v={first,last};
   	return v;
}