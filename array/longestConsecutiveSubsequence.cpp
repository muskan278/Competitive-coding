#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int findLongestConseqSubseq(int arr[], int n)
    {
        unordered_set<int> S;
        int ans = 0;
 
        for (int i = 0; i < n; i++)
        S.insert(arr[i]);
        
        // check each possible sequence from the start then update optimal length
        for (int i = 0; i < n; i++)
        {
            // if current element is the starting element of a sequence
            if (S.find(arr[i] - 1) == S.end())
            {
                // Then check for next elements in the sequence
                int t = arr[i],c=0;
                while (S.find(t) != S.end())
                {
                    t++;c++;
                }
                // update  optimal length if this length is more
                ans = max(ans,c);
            }
        }
        return ans;
    }
};

int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
} 