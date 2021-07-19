// Move all negative numbers to beginning and positive to end with constant extra space
// An array contains both positive and negative numbers in random order. Rearrange the array elements so that all negative numbers appear before all positive numbers.
//TWO POINTER APPROACH
// Given an array of N integers, and an integer K, find the number of pairs of elements in the array whose sum is equal to K.

#include <bits/stdc++.h>
using namespace std;
class Solution{   
public:
    void moveNegativeFirst(int a[],int n) {
       int left=0,right=n-1; 
       while(left<=right)
       {
           if(a[left]>0 && a[right]<0)
           {
               int temp=a[left];
               a[left]=a[right];
               a[right]=temp;
               left++;right--;
           }
           else if(a[left]>0 && a[right]>0)
           {
               right--;
           }
           else if(a[left]<0 && a[right]<0)
           {
               left++;
           }
           else{
               left++;
               right--;
           }
       }
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        ob.moveNegativeFirst(arr,n);
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<"\t";
        }
    }
    return 0;
    
}

