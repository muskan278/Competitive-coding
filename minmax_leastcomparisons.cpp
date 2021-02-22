#include <bits/stdc++.h> 
using namespace std;

typedef pair<int,int> pii;

pii find_minmax(int a[],int low,int high){

    pii minmax1; 
    pii minmax2; 
    int min_all,max_all; 

    if(low==high)
    {
        min_all=a[low];
        max_all=a[low];
        
    }   
    else if(high==low+1)
    {
        if(a[low]>a[high])
        {
            max_all=a[low];
            min_all=a[high];
        }
        else
        {
            max_all=a[high];
            min_all=a[low];
        }
    }
    else{
    int mid=(low+high)/2;
    minmax1=find_minmax(a,low,mid);
    minmax2=find_minmax(a,mid+1,high);

    if(minmax1.first<minmax2.first)
    min_all=minmax1.first;
    else
    min_all=minmax2.first;

    if(minmax1.second>minmax2.second)
    max_all=minmax1.second;
    else
    max_all=minmax2.second;
    }
    return std::make_pair(min_all,max_all);
}

int main() {
    int t ;
    cin >> t ;

    while( t-- ) {    
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        pii ans= find_minmax(a,0,n-1);
        cout<<"\nMaximum="<<ans.first<<"\nMinimum="<<ans.second;
    }

    return 0 ;

}
