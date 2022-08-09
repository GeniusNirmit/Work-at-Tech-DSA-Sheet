//Problem Statement:- https://workat.tech/problem-solving/practice/inversion-count


int getInversionCount(vector<int> a) {
   int counter=0
   int n=a.size();
   //Bubble Sorting for counting number of steps required to make the array sorted.
   for (int i=0;i<n;i++) 
   {
       for (int j=i+1;j<n;j++) 
       {
           if(a[i]>a[j]) 
               counter++;
       }
   }
   return counter;
}