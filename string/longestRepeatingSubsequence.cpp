#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		int LongestRepeatingSubsequence(string s){
            //BOTTOM UP SOLN
            int l=s.length();
            vector<vector<long long int>> dp(l+1,vector<long long int> (l+1,0));
            
            for(int i=1;i<=l;i++)
            {
                for(int j=1;j<=l;j++)
                {
                    if(s[i-1]==s[j-1] && i!=j)
                    dp[i][j]=1+dp[i-1][j-1];
                    else
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
            return dp[l][l];
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends