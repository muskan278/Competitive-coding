#include <bits/stdc++.h> 
using namespace std;
    
int minOperations (string s1,string s2)
{	
    unordered_map<char, int> count;

	for (int i = 0; i < s1.length(); i++)
		count[s1[i]]++;
    for (int i = 0; i < s2.length(); i++)
		count[s2[i]]--;

	for (auto it : count) {
		if (it.second!=0)
			return -1;
    }
    int res = 0,i,j,n=s1.length();
    for (i=n-1, j=n-1; i>=0; )
    {
        // If there is a mismatch, then keep incrementing
        // result 'res' until s2[j] is not found in s1[0..i]
        while (i>=0 && s1[i] != s2[j])
        {
            i--;
            res++;
        }
 
        // If s1[i] and s2[j] match
        if (i >= 0)
        {
            i--;
            j--;
        }
    }
    return res;
}

int main()
{
    int t; 
    cin >> t;
    while (t--)
    {
        string s1,s2; 
        cin>>s1>>s2;

        cout << minOperations(s1,s2) << endl;
    }
}
