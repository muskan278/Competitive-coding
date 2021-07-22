#include <bits/stdc++.h> 
using namespace std; 
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        int k=0,m=r,l=0,n=c;
        /* 
        k - starting row index
        m - ending row index
        l - starting column index
        n - ending column index
        */
        vector<int> ans;
        while(k<m && l<n)
        {
            //top row
            //the first row from the remaining rows
            for(int i=l;i<n;i++)
            ans.push_back(matrix[k][i]);
            k++;
            
            //right column
            //the last column from the remaining columns
            for(int i=k;i<m;i++)
            ans.push_back(matrix[i][n-1]);
            n--;
            
            //bottom row
            //the last row from the remaining rows
            if(k<m){
                for(int i=n-1;i>=l;i--)
                ans.push_back(matrix[m-1][i]);
                m--;
            }
                
            //left column
            //the first column from the remaining columns 
            if(l<n)
            {
                for(int i=m-1;i>=k;i--)
                ans.push_back(matrix[i][l]);
                l++;
            }
                
        }
        return ans;
    }
};

int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
} 