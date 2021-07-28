#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
  
    int op(string s,string t,int m,int n)
    {
        int dp[m+1][n+1];
        
        for(int i=0;i<=m;i++)
        {
            for(int j=0;j<=n;j++)
            {
                if(i==0) dp[i][j]= j;
                
                else if(j==0) dp[i][j]= i;
                
                else if(s[i-1]==t[j-1])
                dp[i][j]= dp[i-1][j-1];
                
                else{
                    int insert=dp[i][j-1];
                    int remove=dp[i-1][j];
                    int replace=dp[i-1][j-1];            
                    dp[i][j]=1+min(insert,min(remove,replace));
                }
            }
        }
        return dp[m][n];
        
    }
    int editDistance(string s, string t) {
        return op(s,t,s.length(),t.length());
    }
};

// { Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends