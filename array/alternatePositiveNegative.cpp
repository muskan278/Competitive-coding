#include <bits/stdc++.h>
using namespace std;

void alternatePosNeg(int a[],int n) {
   int left=0,right=n-1; 
   while(left<=right)
   {
       if(a[left]<0 && a[right]>0)
       {
           int temp=a[left];
           a[left]=a[right];
           a[right]=temp;
           left++;right--;
       }
       else if(a[left]<0 && a[right]<0)
       right--;
       else if(a[left]>0 && a[right]>0)
       left++;
       else
       {
           left++;
           right--;
       }
    }
    //left ==> no. of +ve elements or index where -ve elements start
    int k = 0,i=left;
    while (k < n && i < n)
    {
        // swap next positive
        // element at even position
        // from next negative element.
        swap(a[k], a[i]);
        i = i + 1;
        k = k + 2;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    alternatePosNeg(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
    
}

