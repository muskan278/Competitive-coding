#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    int arr[n+m];
	    int k=0;
	    int i=0,j=0;
	    while(i<n && j<m)
	    {
	       
	        if(arr1[i]<arr2[j])
	        {
	            arr[k]=arr1[i];
	            k++;i++;
	            
	        }
	        else
	        {
	            arr[k]=arr2[j];
	            j++;k++;
	        }
	    }
	    if(i!=n)
	    {
	        for(;i<=n;i++)
	        {
	            arr[k]=arr1[i];
	            k++;
	        }
	    }
	    if(j!=m)
	    {
	        for(;j<=m;j++)
	        {
	            arr[k]=arr2[j];
	            k++;
	        }
	    }
	    for(int i=0;i<k-1;i++)
        cout<<arr[i]<<" ";
        cout<<"\n";	   
	}
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, i;
        cin >> n >> m;
        int arr1[n], arr2[m];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < m; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        ob.merge(arr1, arr2, n, m);
    }
    return 0;
}  