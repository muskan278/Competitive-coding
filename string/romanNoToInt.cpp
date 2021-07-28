#include <bits/stdc++.h>
using namespace std;

// Returns decimal value of roman numeral
int romanToDecimal(string &str) {
    int l=str.length(),ans=0;
    unordered_map<char,int> val;
    val['I']=1;
    val['V']=5;
    val['X']=10;
    val['L']=50;
    val['C']=100;
    val['D']=500;
    val['M']=1000;
    for(int i=0;i<l-1;i++)
    {
        if(val[str[i]]<val[str[i+1]])
        ans-=val[str[i]];
        else
        ans+=val[str[i]];
    }
    ans+=val[str[l-1]];
    return ans;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << romanToDecimal(s) << endl;
    }
}
