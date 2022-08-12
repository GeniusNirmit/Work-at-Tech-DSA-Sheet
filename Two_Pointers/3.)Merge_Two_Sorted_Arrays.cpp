//Problem Statement/:-https://workat.tech/problem-solving/practice/two-sum-sorted

//1.) Optimal way is with O(m+n) time complexity.
vector<int> mergeSortedArrays(vector<int> A, vector<int> B) {
   vector<int> v(A.size()+B.size());
   int i=0,j=0,k=0;
   while (i<A.size() && j<B.size()) 
   {
       if(A[i] < B[j]) 
           v[k++] = A[i++];
       else
           v[k++] = B[j++];
   }
   while(i<A.size()) 
       v[k++]=A[i++];
   while(j<B.size())
       v[k++]=B[j++];
   return v;
}

//2.) Another solution is with O(m+n.log(m+n)) time complexity
vector<int> mergeSortedArrays(vector<int> &A, vector<int> B) {
	vector<int> v;
	int a[A.size()+B.size()];
	int j=0;
	for(int i=0;i<A.size();i++)
	{
		a[j++]=A[i];
	}
	for(int i=0;i<B.size();i++)
	{
		a[j++]=B[i];
	}
	for(int i=0;i<A.size()+B.size();i++)
	{
		v.push_back(a[i]);
	}
	sort(v.begin(),v.end());
	return v;
}