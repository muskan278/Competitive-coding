// C++ program to print subarray with sum as given sum
#include<bits/stdc++.h>
using namespace std;
//also prints length of min length subarray
int subArraySum(int arr[], int n, int x)
{
	unordered_map<int,int> map;
    int sum=0,l=INT_MAX;
    
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        
        if(sum>x)
        {
            cout << "Sum found between indexes "<< 0 << " to " << i << endl;
            l=min(l,i+1);
        }
        
        if(map.find(sum-x)!= map.end())
        {
            cout << "Sum found between indexes "<< map[sum-x] + 1<< " to " << i << endl;
            l=min(l,i-map[sum-x]+1);
        }
        
        map[sum]=i;
    }

	cout << "No subarray with given sum exists";
    return l;

}

int main()
{
    int n,sum;
    cin>>n>>sum;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];

	cout<<subArraySum(arr, n, sum);

	return 0;
}
