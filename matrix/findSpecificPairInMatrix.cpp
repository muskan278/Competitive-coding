// An efficient method to find maximum value of mat[d]- ma[a][b] such that c > a and d > b
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000
int mat[MAX][MAX];

int findMaxValue(int mat[][MAX],int r,int c)
{
	int maxValue = INT_MIN; //stores maximum value
	int maxArr[r][c];   // maxArr[i][j] stores max of elements in matrix from (i, j) to (N-1, N-1)

	// last element of maxArr will be same's as of the input matrix
	maxArr[r-1][c-1] = mat[r-1][c-1];

	// preprocess last row
	int maxInRow = mat[r-1][c-1]; // Initialize max
	for (int j = c - 2; j >= 0; j--)
	{
		if (mat[r-1][j] > maxInRow)
			maxInRow= mat[r - 1][j];
		maxArr[r-1][j] = maxInRow;
	}

	// preprocess last column
	int maxInCol = mat[r - 1][c - 1]; // Initialize max
	for (int i = r - 2; i >= 0; i--)
	{
		if (mat[i][c - 1] > maxInCol)
			maxInCol = mat[i][c - 1];
		maxArr[i][c - 1] = maxInCol;
	}

	// preprocess rest of the matrix from bottom
	for (int i = r-2; i >= 0; i--)
	{
		for (int j = c-2; j >= 0; j--)
		{
			// Update maxValue
			if (maxArr[i+1][j+1] - mat[i][j] >maxValue)
				maxValue = maxArr[i + 1][j + 1] - mat[i][j];

			// set maxArr (i, j)
			maxArr[i][j] = max(mat[i][j],max(maxArr[i][j + 1],maxArr[i + 1][j]) );
		}
	}

	return maxValue;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r,c;
        cin>>r>>c;
    
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
                cin>>mat[i][j];
        cout<<findMaxValue(mat,r,c)<<endl;
    }
      return 0;
}
/*
1 5 5
1 2 -1 -4 -20 
-8 -3 4 2 1 
3 8 6 1 3 
-4 -1 1 7 -6 
0 -4 10 -5 1 

output:18
*/
