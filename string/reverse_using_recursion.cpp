//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;
string reverseWord(string str,int start,int end){
    if(start>=end)
    return str;
    
    char temp=str[start];
    str[start]=str[end];        
    str[end]=temp;
    return reverseWord(str,start+1,end-1);

}

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	int start=0,end=s.length()-1;
	cout<<reverseWord(s,start,end);
	}
	return 0;
	
}

// } Driver Code Ends


