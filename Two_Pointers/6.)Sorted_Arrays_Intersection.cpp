//Problem Statement/:-https://workat.tech/problem-solving/practice/sorted-arrays-intersection

//1.) Optimal way is with O(m+n) time complexity.
vector<int> intersection(vector<int> &A, vector<int> &B) {
	vector<int> v;
	int i=0,j=0;
	while(i<A.size() && j<B.size())
	{
		if(A[i]==B[j])
		{
			v.push_back(A[i]);
			i++;
			j++;
		}
		else if(A[i]>B[j])
			j++;
		else
			i++;
	}
	return v;
}

//2.) Another solution is with O(m+n) time complexity using Hash Table.