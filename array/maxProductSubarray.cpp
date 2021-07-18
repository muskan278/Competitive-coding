#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
	long long maxProduct(int *a, int n) {
	    long long int maxProduct=a[0],minVal=a[0],maxVal=a[0];
	    
	    for(int i=1;i<n;i++)
	    {
	        if(a[i]<0) 
	        swap(minVal,maxVal);
	        long long int t=a[i];
	        minVal=min(minVal*a[i],t);
	        maxVal=max(maxVal*a[i],t);
	        
	        maxProduct=max(maxProduct,maxVal);
	    }
	    return maxProduct;
	}
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
} 