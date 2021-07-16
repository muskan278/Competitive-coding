#include <bits/stdc++.h>
using namespace std;

class Solution{
public:	
	int isPlaindrome(string S)
	{
	    int n=S.length(),f=1;;
	    for(int i=0;i<n/2;i++)
	    {
	        if(S[i]!=S[n-i-1])
	        {
	            f=0;break;
	        }
	    }
	    return f;
	}

};


int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPlaindrome(s) << "\n";
   	}

    return 0;
} 