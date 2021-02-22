#include <bits/stdc++.h> 
using namespace std;

void rotate(int a[], int n,int k)
{
    int ar[n-k];
    for(int i=0;i<=n-k;i++)
    ar[i]=a[i];

    for(int i=0;i<k;i++)
    a[i]=a[i+n-k];
    
    for(int i=k;i<n;i++)
    a[i]=ar[i-k];
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int k;     //k=1 for cyclically rotating by 1
        cin>>k;     //to rotate by k

        int a[n],i;
        for(i=0;i<n;i++)
        cin>>a[i];
        
        rotate(a,n,k);
        
        for (i = 0; i < n; i++)
        cout<<a[i];
        cout<<"\n";
    }
        return 0;
}
