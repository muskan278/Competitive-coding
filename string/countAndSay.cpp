#include <bits/stdc++.h>
using namespace std;

string countAndSay(int n) {
    if(n==1)
        return "1";
    
    string ans="1";
    for(int i=2;i<=n;i++)
    {
        string t="";
        int c=1;
        
        for(int j=0;j<ans.length();j++)
        {
            if(ans[j] == ans[j+1])
                c++;
            else
            {
                t=t+to_string(c)+ans[j];
                c=1;
            }
        }
        ans=t;    
    }
    return ans;       
}


int main()
{
    int n;
    cin>>n;
    cout<<countAndSay(n);
	return 0;
}
