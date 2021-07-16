#include<bits/stdc++.h>
using namespace std;

int getMinDiff(int arr[], int n, int k) {
    sort(arr, arr + n); // sort the array to get the corner cases ans.
    int minEle, maxEle; // these 2 variables will hold the
                        // between elements max and min value
    int result = arr[n - 1]- arr[0]; // current result when arr[0]
                                     // is min and arr[n-1] is max

    for (int i = 1; i <= n - 1; i++) {
        // if (arr[i] >= k && arr[n - 1] >= k) {
            maxEle = max(arr[i - 1] + k,arr[n - 1] - k); 
            minEle = min(arr[0] + k, arr[i] - k);

            result = min(result, maxEle - minEle);
            // if the middle elements max and min
            // difference if less than result then update
            // result.
        // }
    }
    return result;
}

int main()
{
    int n,k;
    cin>>n; 
    cin>>k;
    int a[n];
        
    for(int i=0;i<n;i++)
        cin>>a[i];
        
    cout << getMinDiff(a,n,k) << endl;
    
}