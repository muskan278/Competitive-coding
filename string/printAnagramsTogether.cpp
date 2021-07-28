#include <bits/stdc++.h> 
using namespace std;
vector<vector<string>> Anagrams(vector<string>& string_list) 
{
    unordered_map<string,vector<string>> umap;
    vector<vector<string>> ans;
    for(int i=0;i<string_list.size();i++)
    {
        string str=string_list[i];
        sort(str.begin(), str.end());
        umap[str].push_back(string_list[i]);
    }
    for(int i=0;i<string_list.size();i++)
    {
        string str=string_list[i];
        sort(str.begin(), str.end());
        if(!umap[str].empty())
        ans.push_back(umap[str]);
        
        umap.erase(str);
    }
    
    return ans;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        vector<vector<string> > result = Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}