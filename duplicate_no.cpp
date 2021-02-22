#include <bits/stdc++.h> 
using namespace std;


int findDuplicate(vector<int>& nums) {
    unordered_map<int,int> freq;
    for(int i=0;i<nums.size();i++)
    {
        if(freq[nums[i]]<0)
        return nums[i];
        else
        freq[nums[i]]-=nums[i];
    } 
    return -1;
}
int main() {
    int t ;
    cin >> t ;

    while( t-- ) {    
        int n;
        cin>>n;
        int t;
        vector<int> nums;
        for(int i=0;i<n;i++)
        {
            cin>>t;
            nums.push_back(t);
        }
       cout<<findDuplicate(nums);
    }
    return 0 ;

}