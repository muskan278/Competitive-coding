#include <bits/stdc++.h>
using namespace std;

// Function to return the count of maximum substrings str can be divided into
int maxSubStr(string str, int n)
{
    int f0=0,f1=0,ans=0;

    for(int i=0;i<n;i++)
    {
        if(str[i]=='0')
        f0++;
        if(str[i]=='1')
        f1++;

        if(f0==f1){
            ans++;
            f0=0;f1=0;
        }
    }
    return ans;

}

int main()
{
	string str;
    cin>>str;
	int n = str.length();
	cout << maxSubStr(str, n);
	return 0;
}
