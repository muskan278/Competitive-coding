#include <bits/stdc++.h> 
using namespace std;
 
int minFlips (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;

        cout << minFlips (s) << endl;
    }
}

int minF(string s,char last)
{
    int ans=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!=last)
            ans++;
        
        if(last=='0')
        last='1';
        else
        last='0';
    }
    return ans;
}
int minFlips (string s)
{
    int s0=minF(s,'0');
    int s1=minF(s,'1');
    return min(s0,s1);
}