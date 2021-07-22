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
            int place=0;
            // Find count of elements smaller than mid                    
            for (int i = 0; i < n; i++) {
                // if num is less than the first element then no more element in matrix
                // further are less than or equal to num
                if (mat[i][0] > mid) {
                    break;
                }
                // if num is greater than last element, it is greater than all elements in that row
                else if (mat[i][n - 1] <= mid) {
                    place += n;
                    continue;
                }
                else{
                    // This contain the col index of last element in matrix less than of equal to num
                    int greaterThan = 0;
                    for (int jump = n / 2; jump >= 1; jump /= 2) {
                        while (greaterThan + jump < n &&
                            mat[i][greaterThan + jump] <= mid) {
                            greaterThan += jump;
                        }
                    }
            
                    place += greaterThan + 1;
                }
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

/*
1 4 
10 20 30 40 15 25 35 45 25 29 37 48 32 33 39 50
7
OUTPUT: 30
*/


