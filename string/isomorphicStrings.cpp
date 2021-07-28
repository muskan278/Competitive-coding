// C++ program to check if two strings are isomorphic
#include<iostream>
#include<string.h>

using namespace std;
#define MAX_CHARS 256

 // } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        if(str1.length()!=str2.length())return false;
        bool marked[256] = {false}; //To mark visited characters in str2
        int map[256]; 
        memset(map, -1, sizeof(map));
        for(int i=0;i<str1.length();i++)
        {
            if(map[str1[i]]==-1)
            {
                // If current character of str2 is already
                // seen, one to one mapping not possible
                if (marked[str2[i]] == true)
                    return false;
     
                // Mark current character of str2 as visited
                marked[str2[i]] = true;
     
                // Store mapping of current characters
                map[str1[i]]=str2[i];
            }
		    else if((int)str2[i]!=map[str1[i]])
		    {
		        return false;
		    }
		    
        }
        return true;
        
    }
};

// { Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}  // } Driver Code Ends