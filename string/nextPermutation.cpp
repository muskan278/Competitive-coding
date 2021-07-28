// Find next greater number with same set of digits. [Very Very IMP]
#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    vector<int> nextPermutation(int n, vector<int> nums){
        if(n==1)
            return nums;
        
        int i=n-1;
        for(;i>0;i--)
        {
            if(nums[i-1]<nums[i])
            break;
        }
        if(i!=0)
        {
            for(int j=n-1;j>=i;j--)
            {
                if(nums[i-1]<nums[j])
                {
                    swap(nums[i-1],nums[j]);
                    break;
                }
            }
        }
         
        reverse(nums.begin() + i, nums.end());
        return nums;
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans = ob.nextPermutation(N, arr);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}  