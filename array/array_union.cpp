#include <bits/stdc++.h> 
using namespace std;

int main() {
    int t ;
    cin >> t ;

    while( t-- ) {    
        int n,m,temp;
        cin>>n>>m;
        unordered_map<int, int> umap; 
        for(int i=0;i<n+m;i++)
        {
            cin>>temp;
            umap[temp]++;
        }
        cout<<umap.size()<<"\n";
        // for (auto x : umap) 
        // cout << x.first << " " << x.second << endl;
        // cout<<"done\n"; 
    }
    
	return 0;
}