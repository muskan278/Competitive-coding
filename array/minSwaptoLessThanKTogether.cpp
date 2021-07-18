// C++ program to find minimum swaps required
// to club all elements less than or equals
// to k together
#include <iostream>
using namespace std;
int minSwap(int *arr, int n, int k);

int main() {

	int t,n,k;
	cin>>t;
	while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        cout << minSwap(arr, n, k) << "\n";
    }
	return 0;
}
int minSwap(int *arr, int n, int k) {
    int pos=0,good=0,bad=0;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=k)
        good++;
    }
    for(int i=0;i<good;i++)
    {
        if(arr[i]>k)
        bad++;
    }
    int ans=bad;
    for(int j=good;j<n;j++)
    {
        if(arr[j-good]>k) 
        bad--;
        if(arr[j]>k)
        bad++;
        
        ans=min(ans,bad);
    }
    return ans;
}
