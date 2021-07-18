#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {
        unordered_map<int,int> umap;
	    int i,c=0;
	    for(i=0;i<n;i++)
	    umap[arr[i]]++;
	    unordered_map<int,int>:: iterator itr; 
	    for (itr = umap.begin(); itr != umap.end(); itr++) 
        {
           if(itr->second>n/k)
           c++;
        } 
        return c;
    }
};

int main() {
    int t, k;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;

        int arr[n];

        for (i = 0; i < n; i++) cin >> arr[i];
        cin >> k;
        Solution obj;
        cout << obj.countOccurence(arr, n, k) << endl;
    }
    return 0;
}
