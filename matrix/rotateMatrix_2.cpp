#include <bits/stdc++.h>
using namespace std;
//https://www.geeksforgeeks.org/rotate-matrix-90-degree-without-using-extra-space-set-2/
class Solution {
public:

    void rotate(vector<vector<int>>& matrix) {
        int n= matrix.size();
    
        // iterate over all the boundaries of the matrix
        for (int i = 0; i <= n / 2 - 1; i++) {
            // for each boundary, keep on taking 4 elements 
            // (one each along the 4 edges) and 
            // swap them in anticlockwise manner
            for (int j = 0; j <= n - 2 * i - 2; j++) {
                int temp= matrix[i + j][i];
                matrix[i + j][i] = matrix[n - 1 - i][i + j];
                matrix[n - 1 - i][i + j] = matrix[n - 1 - i - j][n - 1 - i];
                matrix[n - 1 - i - j][n - 1 - i] = matrix[i][n - 1 - i - j];
                matrix[i][n - 1 - i - j]= temp;
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            cout<<matrix[i][j]<<" ";
            cout<<"\n";
        }
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        obj.rotate(matrix);        
    }
    return 0;
}