//Problem Statement:-https://workat.tech/problem-solving/practice/max-consecutive-ones

int getMaxConsecutiveOnes(vector<int> &A) {
	int counter=0;
	int maximum=0;
    for(int i=0;i<=A.size();i++)
	{
		//For checking ones.
		if(A[i]==1)
			counter++;
		//Comparing the ones with the maximum counter.
		else if(A[i-1]==1)
		{
			maximum=max(maximum,counter);
			counter=0;
		}
	}
	return maximum;
}