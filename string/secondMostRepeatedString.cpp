#include<bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        unordered_map<string,int> freq;
        for(int i=0;i<n;i++)
        freq[arr[i]]++;
        
        int max_count = 0;
        string res ="";
        for (auto i : freq) {
            if (max_count < i.second) {
                res = i.first;
                max_count = i.second;
            }
        }
        int sec_count=0;
        string sec="";
        for (auto i : freq) {
            if (i.second!=max_count && sec_count<i.second) {
                sec = i.first;
                sec_count = i.second;
            }
        }
        return sec;
    }
};

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent (arr, n) << endl;
    }
}
