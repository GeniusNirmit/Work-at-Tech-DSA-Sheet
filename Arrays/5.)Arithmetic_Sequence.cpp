//Problem Statement:- https://workat.tech/problem-solving/practice/arithmetic-sequence

bool isArithmeticSequence(vector<int> &arr) {
	//Sorting the vector.
	sort(arr.begin(),arr.end());

	//Checking condition for the arithmetic sequence.
	for(int i=0;i<arr.size()-2;i++)
	{
		if((arr[i]-arr[i+1])!=(arr[i+1]-arr[i+2]))
			return false;
	}
	return true;
}