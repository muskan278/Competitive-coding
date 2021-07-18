#include<bits/stdc++.h>
using namespace std;

class Solution{

    // Function to find the trapped water between the blocks.
    public:
    int trappingWater(int arr[], int n){
        int lmax=0,rmax=0,l=0,r=n-1,ans=0;
        
        while(l<=r)
        {
            if(rmax<=lmax)
            {
                ans+=(max(0,rmax-arr[r]));
                rmax=max(rmax,arr[r]);
                r--;
            }
            else{
                ans+=(max(0,lmax-arr[l]));
                lmax=max(lmax,arr[l]);
                l++;
            }
        }
        return ans;
    }
};


int main(){
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        int a[n];
        
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
} 