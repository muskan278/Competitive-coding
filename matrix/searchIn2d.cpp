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
        
        // set indexes for top right element
        int i = 0, j =col;
        while (i <=row && j >= 0)
        {
            if (matrix[i][j] == target)
            {
                // cout << "n Found at "<< i << ", " << j;
                return true;
            }
            if (matrix[i][j] > target)
                j--; // the entire column gets eliminated
            else
                i++; //the entire row gets eliminated
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