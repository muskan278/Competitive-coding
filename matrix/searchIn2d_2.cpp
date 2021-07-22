#include <bits/stdc++.h> 
using namespace std; 
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size()-1,col=matrix[0].size()-1;
        
        if(target>matrix[row][col])
            return false;
        if(target<matrix[0][0])
            return false;
        
        for(int i=0;i<matrix.size()-1;i++)
        {
            if(matrix[i][0]<=target && matrix[i+1][0]>target)
            {
                row=i;
                break;
            }
        }
        
        int l=0;
        int r=matrix[row].size()-1;
        while (l <= r) 
        {
            int m = l + (r - l) / 2;
            
            if (matrix[row][m] == target)
                return true;
            
            // If x greater, ignore left half
            if (matrix[row][m] < target)
                l = m + 1;
            // If x is smaller, ignore right half
            else
                r = m - 1;
        }
  
    // if we reach here, then element was not present
    return false;
    }
};
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c,target;
        cin>>r>>c>>target;
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
        cout<< ob.searchMatrix(matrix,target)<<endl;
    }
    return 0;
} 