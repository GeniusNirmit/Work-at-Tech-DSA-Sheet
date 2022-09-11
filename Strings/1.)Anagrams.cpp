//Problem Statement/:-https://workat.tech/problem-solving/practice/anagrams

bool areAnagrams(string A, string B) {
	sort(A.begin(),A.end());
	sort(B.begin(),B.end());
	int a=A.size();
	int b=B.size();
	if(a==b)
	{
		for(int i=0;i<a;i++)
		{
			if(A[i]!=B[i])
				return false;
		}
	}
	else if(a!=b)
		return false;
	return true;
}
