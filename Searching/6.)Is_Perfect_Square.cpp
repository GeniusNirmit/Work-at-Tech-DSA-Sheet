//Problem Statement/:https://workat.tech/problem-solving/practice/is-perfect-square


//1.) Optimal way is Binary Search with O(log n) time complexity.
bool isPerfectSquare(int num) {
    int h=10000,l=1,mid;
	while(l<=h)
	{
		mid=(l+h)/2;
		int answer=mid*mid;
		if(answer==num)
			return true;
		else if(answer>num)
			h=mid-1;
		else
			l=mid+1;
	}
	return false;
}

//2.) Another solution is Linear Search with O(sqrt(n)) time complexity
bool isPerfectSquare(int num) {
	for(int i=1;i<=num;i++)
	{
		if(i*i==num)
			return true;
		else if(i*i>num)
			return false;
	}
}