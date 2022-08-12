//Problem Statement/:-https://workat.tech/problem-solving/practice/two-sum-sorted

//1.) Optimal way is with O(n) time complexity.
bool hasTwoSumZero(vector<int> &A) {
	int i=0,j=A.size()-1;
	while(i<j)
	{
		if(-A[i]==A[j])
			return true;
		else if(-A[i]>A[j])
			i++;
		else
			j--;
	}
	return false;
}


//2.) Another solution is with O(n^2) time complexity
bool hasTwoSumZero(vector<int> A) {
	for(int i=0;i<A.size();i++) 
	{
		for(int j=i+1;j<A.size();j++) 
		{
			if(A[i]+A[j]==0)
				return true;
		}
	}
	return false;
}