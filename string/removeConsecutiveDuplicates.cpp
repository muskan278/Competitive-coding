#include <bits/stdc++.h> 
using namespace std; 

class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
        string ans="";
        char last=S[0];
        ans+=last;
        for(int i=1;i<S.length();i++)
        {
            if(S[i]!=last)
            {
                ans+=S[i];
                last=S[i];
            }
        }
        return ans;
    }
};

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    }
} 