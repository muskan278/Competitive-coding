#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        unordered_set<int> prefixSum;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            if(prefixSum.find(sum)!= prefixSum.end())
            return true;
            if(sum==0)
            return true;
            
            prefixSum.insert(sum);
        }
        return false;
    };
};

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    Solution obj;
	    	if (obj.subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
} 