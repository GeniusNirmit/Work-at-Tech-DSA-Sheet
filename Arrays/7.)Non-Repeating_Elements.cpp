//Problem Statement/:-https://workat.tech/problem-solving/practice/non-repeating-element

//1.) Optimal way is with O(log(n)) time complexity.
int findNonRepeatingElement(vector<int> &arr) {
   	int l=0,h=arr.size()-1,mid;
	while(l<=h) 
   	{
       	mid=(h+l)/2;
	    if(l==h)
           	return arr[mid];
       	if (mid%2==0) 
       	{
           	if(arr[mid]==arr[mid+1])
               	l=mid+1;
           	else
               	h=mid;
	    } 
       	else 
       	{
	        if(arr[mid]==arr[mid-1])
               	l=mid+1;
           	else
               	h=mid;   
       	}
   	}
}

//2.) Another solution is with O(n) time complexity
int findNonRepeatingElement(vector<int> arr) {
   	int arrXor=0;
   	for(int i=0;i<arr.size();i++)
       	arrXor=arrXor^arr[i];
   	return arrXor;
}

//3.) Another solution is with O(n) time complexity

int findNonRepeatingElement(vector<int> &arr) {
	for(int i=0;i<arr.size()-2;)
	{
		if(arr[i]==arr[i+1])
			i+=2;
		else
			return arr[i];
	}
}
