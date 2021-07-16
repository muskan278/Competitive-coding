#include <bits/stdc++.h>
using namespace std;

class Solution{
public:	
	int maxRepeating(int *arr, int n, int k) {
	    // code here
	    unordered_map<int,int> umap;
	    int i;
	    for(i=0;i<n;i++)
	    umap[arr[i]]++;
	
	    int max=0,ans=k;
	    unordered_map<int,int>:: iterator itr; 
	    for (itr = umap.begin(); itr != umap.end(); itr++) 
        {
           if(itr->second>=max)
           {
               if(itr->first>ans && itr->second==max)
               continue;
               ans=itr->first;
               max=itr->second;
           }
        } 
        return ans;
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
        auto ans=ob.maxRepeating(arr,n,k);
        cout<<"ans"<<ans<<"\n";
    }
    return 0;
    
}

