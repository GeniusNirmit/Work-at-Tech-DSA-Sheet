//Problem Statement:-https://workat.tech/problem-solving/practice/largest-contiguous


//The optimized solution which is also known as Kadane's Algorithm with O(n) as Time Complexity
int largestContiguousSum(vector <int> &arr){
	int n=arr.size();
	int max=0,sum=arr[0];
    for(int i=0;i<n;i++)
    {
        max+=arr[i];
        if(max>sum)
            sum=max;
    	if(max<0)
        	max=0;
    }
    return sum;
}


//Another solution with O(n^3)
int largestContiguousSum(vector <int> &arr){
    int min=arr[0],sum;
    for(int i=0;i<arr.size();i++)
    {
        if(min>arr[i])
            min=arr[i];
    }
    for(int i=0;i<arr.size();i++)
    {
        for(int j = 0; j < arr.size(); j++) 
        {
            sum = 0;
            for(int k = i; k <= j; k++) 
            {
                sum += arr[k];
            }
            min=max(min,sum);
        }    
    }
    return min;
}