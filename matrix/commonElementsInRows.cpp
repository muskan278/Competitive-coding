#include <bits/stdc++.h>
using namespace std;
//O(N^2LogN)
class Solution {
  public:
    vector<int> commonElements(vector<vector<int>> mat) {
        unordered_map<int,int> temp;
        vector<int> ans;
        int r=mat.size(),c=mat[0].size();
        
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(temp[mat[i][j]]==i)
                    temp[mat[i][j]]=i+1;
          
                if(i==r-1 && temp[mat[i][j]]==r)
                {
                    ans.push_back(mat[i][j]);
                }
            }
        }
        return ans;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int m,n;
        cin >> m>>n;
        //m rows n columns
        vector<vector<int>> v(m, vector<int>(n));
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++) 
                cin >> v[i][j];

            
        Solution ob;
        vector<int> ans = ob.commonElements(v);
        for (int j = 0; j < ans.size(); j++) 
        cout << ans[j] << " ";
        
    }
} 