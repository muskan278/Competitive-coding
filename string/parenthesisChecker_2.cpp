#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char> stack;
        
        for(int i=0;i<x.length();i++)
        {
            if(x[i]=='(' || x[i]=='{' || x[i]=='[')
            {
                stack.push(x[i]);
                continue;
            }
            
            if(stack.empty())
            return false;
            
            // cout<<x[i]<<" "<<stack.top()<<"\n";
            if(x[i]==']')
            {
                if(stack.top()=='(' || stack.top()=='{')
                return false;
                stack.pop();
            }
            else if(x[i]=='}')
            {
                if(stack.top()=='(' || stack.top()=='[')
                return false;
                stack.pop();
            }
            else if(x[i]==')')
            {
                if(stack.top()=='[' || stack.top()=='{')
                return false;
                stack.pop();
            }
            
        }

        return stack.empty();
    }

};

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
} 