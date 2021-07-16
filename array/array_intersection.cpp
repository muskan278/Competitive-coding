#include <bits/stdc++.h> 
using namespace std;

int main() {
    int t ;
    cin >> t ;

    while( t-- ) {    
        int n,m,temp;
        cin>>n>>m;
        unordered_map<int, int> umap; 
        for(int i=0;i<m;i++)
        {
            cin>>temp;
            umap[temp]=1;
        }

        for(int i=0;i<n;i++)
        {
            cin>>temp;
            if(umap[temp]==1)
            umap[temp]=-1;
        }

        cout<<umap.size()<<"\n";
        for (auto x : umap)
        {
            if(x.second==-1)
            cout << x.first << endl;
        }
        cout<<"done\n"; 
    }
    
	return 0;
}