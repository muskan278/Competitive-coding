//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string strs[], int N)
    {
        if(N==1)return strs[0];
        int flag=1;
        string pre="";
        for(int i=0;i<strs[0].length();i++)
        {
            char ch=strs[0][i];
            for(int j=1;j<N;j++)
            {
                if(ch!=strs[j][i])
                {
                    flag=0;break;
                }   
            }
            
            if(flag==0)
            {
                if(pre=="")
                return "-1";
                else
                return pre;
            }
            pre+=ch;
        }
        if(flag==0)
        {
            if(pre=="")
            return "-1";
            else                
            return pre;
        }
        
        return pre;
    }
};

// { Driver Code Starts.
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
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends