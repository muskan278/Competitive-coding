// Given an array of N integers, and an integer K, find the number of pairs of elements in the array whose sum is equal to K.
#include <bits/stdc++.h>
using namespace std;
class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
        unordered_map<int,int> umap;
	    int i;
	    for(i=0;i<n;i++)
	    umap[arr[i]]++;
	
	    int ans=0;
	    for(i=0;i<n;i++)
	    {
	        if(arr[i]==k-arr[i])
	        ans+=umap[k-arr[i]]-1;
	        else
	        ans+=umap[k-arr[i]];
	    }
        return ans/2;
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        auto ans=ob.getPairsCount(arr,n,k);
        cout<<"ans"<<ans<<"\n";
    }
    return 0;
    
}