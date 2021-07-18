#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            unordered_set <int> uset1,uset2,uset3;
            for(int i=0;i<n1;i++)
                uset1.insert(A[i]);
            for(int i=0;i<n2;i++)
                uset2.insert(B[i]);
            vector<int> ans;
             // checking if elements of 3rd array are present in first 2 sets
            for(int i=0;i<n3;i++){
                if(uset1.find(C[i])!=uset1.end() && uset2.find(C[i])!=uset2.end()){
                    // using a 3rd set to prevent duplicates
                    if(uset3.find(C[i])==uset3.end())
                        ans.push_back(C[i]);
                    uset3.insert(C[i]);
                }
            }
            return ans;
        }

};

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
} 