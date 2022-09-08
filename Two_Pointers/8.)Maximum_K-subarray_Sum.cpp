//Problem Statement/:-https://workat.tech/problem-solving/practice/sorted-arrays-intersection

//1.) Optimal way is with O(n) time complexity.
int maxKSubarraySum(vector<int> &A, int k) {
	int sum=0;
	for(int i=0;i<k;i++)
	{
		sum+=A[i];
	}
	int max=sum;
	for(int i=k;i<A.size();i++)
	{
		sum-=A[i-k];
		sum+=A[i];
		if(max<sum)
			max=sum;
	}
	return max;
}

//2.) Another solution is with O(n^3) time complexity.
int maxKSubarraySum(vector<int> &A, int k) {    
	int sum=0,max=0;
	for(int i=0;i<A.size();i++)
	{
		for(int j=i;j<A.size();j++)
		{
			if(j-i+1==k)
			{
				sum=0;
				for(int k=i;k<=j;k++)
				{
					sum+=A[k];
				}
				if(max<sum)
					max=sum;
			}
		}
	}
	return max;
}