//Problem Statement/:-https://workat.tech/problem-solving/practice/matrix-search


bool searchMatrix(vector<vector<int>> &matrix, int key) {
	int x=matrix.size();
	int y=matrix[0].size();
	int i=0,j=0;
	for(i=0;i<x;i++)
	{
		if(matrix[i][0]==key)
			return true;
		else if(matrix[i][0]>key)
			break;
		else 
			return false;
	}
	i-=1;
	for(int j=0;j<y;j++)
	{
		if(matrix[i][j]==key)
			return true;
	}
	return false;
}