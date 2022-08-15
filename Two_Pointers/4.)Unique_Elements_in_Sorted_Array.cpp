//Problem Statement/:-https://workat.tech/problem-solving/practice/unique-elements-sorted-array

//1.) Optimal way is with O(n) time complexity.
int removeDuplicates(vector<int> &A) {
   	int n=A.size(),i=0,j=n-1;
   	while (i<j) 
   	{
       	while(i!=j && A[i] == A[i+1]) 
       	{
        	n--;
           	i++;
       	}
       	while (i!=j && A[j]==A[j-1]) 
       	{
        	n--;
           	i--;
       	}
       	i++;
   	}
   	return n;
}


//2.) Another solution is with O(n) time complexity
int removeDuplicates(vector<int> &A) {
	int counter=0,max=A[0];
	for(int i=0;i<A.size();i++)
	{
		if(max<A[i])
			max=A[i];
	}
	int hash[max]={0};
	for(int i=0;i<A.size();i++)
	{
		hash[A[i]-1]++;
	}
	for(int i=0;i<max;i++)
	{
		if(hash[i]>0)
			counter++;
	}
	return counter;
}
