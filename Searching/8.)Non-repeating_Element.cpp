//Problem Statement/:-https://workat.tech/problem-solving/practice/contains-element


//Two ways to search a particular element


//1.) Optimal way is Binary Search with O(log n) time complexity.
int findNonRepeatingElement(vector<int> &arr) {
   int n=arr.size();
   int l=0,h=n-1,mid;
   while(l<=h) 
   	{
       	mid=(l+h)/2;
       	if(l==h) 
        	return arr[mid];
       	if(mid%2==0) 
       	{
           	if(arr[mid]==arr[mid+1]) 
               	l=mid+1;	
            else
               	h=mid;
       	} 
       	else 
       	{
           	if (arr[mid] == arr[mid - 1])
               	l=mid+1;
           	else
               	h=mid;
       	}
   	}
}


//2.) Another solution is Linear Search with O(n) time complexity
int findNonRepeatingElement(vector<int> &arr) {
	sort(arr.begin(),arr.end());
	for(int i=0;i<arr.size()-2;)
	{
		if(arr[i]==arr[i+1])
			i+=2;
		else
			return arr[i];
	}
}


//3.)Using Bitwise Operator
int findNonRepeatingElement(vector<int> arr) {
   int n=arr.size();
   int Xor=0;
   for(int i=0;i<n;i++)
    {
    	Xor=Xor^arr[i];
   	}
   	return Xor;
}