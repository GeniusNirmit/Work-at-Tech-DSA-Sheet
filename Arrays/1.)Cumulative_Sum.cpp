//Problem Statement/:-https://workat.tech/problem-solving/practice/positive-cumulative-sum

vector<int> getPositiveCumulativeSum(vector<int> &arr) {
	int n=arr.size();
	int sum=0;
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
		v.push_back(sum);
	}
	return v;
}