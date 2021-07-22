#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    //transpose then reverse columns
    void rotate(vector<vector<int>>& matrix) {
        int r=matrix.size(),c=matrix[0].size();  
        //transpose
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<i;j++)
                swap(matrix[i][j],matrix[j][i]);
        }
        // reversing columns
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c/2;j++)
            swap(matrix[i][j],matrix[i][c-1-j]);
        }
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
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