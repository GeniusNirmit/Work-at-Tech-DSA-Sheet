//Problem Statement/:-https://workat.tech/problem-solving/practice/contains-element

//Solution is with O(n) time complexity
int removeOccurences(vector<int> &A, int k) {
	int counter=0;
	for(int i=0;i<A.size();i++)
	{
		if(A[i]==k)
			counter++;
	}
	return (A.size()-counter);
}
