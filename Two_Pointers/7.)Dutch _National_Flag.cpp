//Problem Statement/:-https://workat.tech/problem-solving/practice/sorted-arrays-intersection

//1.) Optimal way is with O(n) time complexity.
void sortTheArray (vector<int> &A) {
   int l=0,mid=0,h=A.size()-1;
   while(mid<=h) 
   {
       	if((A[mid])==0) 
	   	{
           	swap(A[l],A[mid]);
           	l++;
           	mid++;
       	}
	   	else if(A[mid]==1) 
           	mid++;
       	else 
	   	{
           	swap(A[mid],A[h]);
           	h--;
		}
   	}
}

//2.) Another solution is with O(n.log(n)) time complexity.
void sortTheArray (vector<int> &A) {
	sort(A.begin(),A.end());
}