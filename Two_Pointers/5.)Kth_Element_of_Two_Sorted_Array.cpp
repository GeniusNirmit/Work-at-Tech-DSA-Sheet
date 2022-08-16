//Problem Statement/:-https://workat.tech/problem-solving/practice/kth-two-sorted

//1.) Solution is with O(m+n.log(m+n)) time complexity
int getKthElement(vector<int> &arr_1, vector<int> &arr_2, int k) {
	vector<int> v;
	for(int i=0;i<arr_1.size();i++)
	{
		v.push_back(arr_1[i]);
	}
	for(int i=0;i<arr_2.size();i++)
	{
		v.push_back(arr_2[i]);
	}
	sort(v.begin(),v.end());
	return v[k-1];
}