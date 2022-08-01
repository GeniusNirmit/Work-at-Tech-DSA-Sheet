//Problem Statement:-https://workat.tech/problem-solving/practice/cumulative-sum

vector<int> getCumulativeSum(vector<int> &arr) {

	int n=arr.size();
	int sum=0;
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		//Added the elements in cumulative manner.
		sum+=arr[i];
		//Pushing the added elements in the vector.
		v.push_back(sum);
	}
	return v;
}