//Binary search method
//WORKS ONLY IF R*C=ODD
#include <bits/stdc++.h>
using namespace std;

class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c){
        int i,j,high=INT_MIN,low=INT_MAX;
        
        for(i=0;i<r;i++)
        {
            low=min(matrix[i][0],low);
            high=max(matrix[i][c-1],high);
        }
        int req=(r*c +1)/2;
        while(low<high)
        {
            int mid=low+(high-low)/2;
            
            int place=0;
            // Find count of elements smaller than mid
            for (i = 0; i < r; ++i)
            {
                j=0;
                for(j=0;j<c;j++)
                {
                    if(matrix[i][j]>mid)break;
                }
                place+=j;
            }   
    
            if(place<req)
            low=mid+1;
            else
            high=mid;
        }
        return low;         
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
}

/*
An efficient approach for this problem is to use a binary search algorithm. The idea is that for a number to be median there should be exactly (n/2) numbers which are less than this number. So, we try to find the count of numbers less than all the numbers. Below is the step by step algorithm for this approach: 
Algorithm:  

First, we find the minimum and maximum elements in the matrix. The minimum element can be easily found by comparing the first element of each row, and similarly, the maximum element can be found by comparing the last element of each row.

Then we use binary search on our range of numbers from minimum to maximum, we find the mid of the min and max and get a count of numbers less than our mid. And accordingly change the min or max.

For a number to be median, there should be (r*c)/2 numbers smaller than that number. So for every number, we get the count of numbers less than that by using upper_bound() in each row of the matrix, if it is less than the required count, the median must be greater than the selected number, else the median must be less than or equal to the selected number.
*/