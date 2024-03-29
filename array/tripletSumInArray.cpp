#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        for(int i=0;i<n-2;i++)
        {
            unordered_set<int> S;
            int curr_sum=X-A[i];
            for(int j=i+1;j<n;j++)
            {
                if(S.find(curr_sum-A[j])!=S.end())
                {
                    return true;
                }
                S.insert(A[j]);
            }
        }
        return false; 
    }

};

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}