/*
00 01 02 
10 11 12 
20 21 22

After rotating the matrix by 90 degrees in clockwise direction, indices transform into
20 10 00  current_row_index = 0, i = 2, 1, 0 
21 11 01 current_row_index = 1, i = 2, 1, 0 
22 12 02  current_row_index = 2, i = 2, 1, 0
*/
#include <bits/stdc++.h>
using namespace std;
//https://www.geeksforgeeks.org/rotate-matrix-90-degree-without-using-extra-space-set-2/
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int r=matrix.size(),c=matrix[0].size();
        int mat[r][c];
        for (int i=0;i<r;i++)
        {
            for(int j=0;j<c/2;j++)
                mat[i][j]=matrix[c-j-1][i];
        }
        
        for (int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
                cout<<mat[i][j]<<" ";
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
