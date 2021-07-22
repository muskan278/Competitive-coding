// kth smallest element in a 2d array sorted row-wise and column-wise
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
int mat[MAX][MAX];


int kthSmallest(int mat[MAX][MAX], int n, int k)
{
        int r=n,c=n;
        int i,j,low=mat[0][0],high=mat[r-1][c-1];
        
        int req=k;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            int place=0,last=c;
            // Find count of elements smaller than mid                
            for (i = 0; i < r; ++i)
            {
                if (mat[i][0]>mid)
                    j=0;
                else if(mat[i][c-1]<=mid)
                    j=c;
                else{
                    for(j=0;j<last;j++)
                    {
                        if(mat[i][j]>mid)
                            break;
                    }
                }
                last=j;
                place+=j;
            }
            
            if(place<req)
            low=mid+1;
            else
            high=mid-1;
        }
        return low;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
    
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>mat[i][j];
        int k;
        cin>>k;
        cout<<kthSmallest(mat,n,k)<<endl;
    }
      return 0;
}


