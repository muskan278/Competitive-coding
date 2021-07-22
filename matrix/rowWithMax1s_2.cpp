//O(M+N)
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > mat, int R, int C) {
	    // Initialize first row as row with max 1s
        int max_row_index = 0,j=C-1;
      
        for (int i = 0; i < R; i++) 
        {
            // Move left until a 0 is found
            bool flag=false; //to check whether a row has more 1's than previous
            
            while (mat[i][j] == 1 && j>=0) 
            {
                j--; // Update the index of leftmost 1 seen so far
                flag=true ;//present row has more 1's than previous
            }
            
            // if the present row has more 1's than previous
            if(flag)
            max_row_index = i; // Update max_row_index
                
        }
        if(max_row_index==0 && mat[0][C-1]==0)
            return -1;
            
        return max_row_index;
	}

};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}
  