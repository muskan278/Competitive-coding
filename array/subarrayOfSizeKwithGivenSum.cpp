#include <bits/stdc++.h>
using namespace std;
bool checkSubarraySum(int a[],int n, int k,int req_sum) {
    int sum=0;
    for(int i=0;i<k;i++)
        sum+=a[i];
    if(sum==req_sum)
        return true;
    
    for(int i=k;i<n;i++)
    {
        sum=sum-a[i-k]+a[i];
        if(sum==req_sum)
            return true;
    }
    return false;
}

int main()
{
    int n,k,sum;
    cin>>n>>k>>sum;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
        
	if (checkSubarraySum(a, n, k, sum))
		cout << "YES";
	else
		cout << "NO";

	return 0;
}
/*
9 4 18
1 4 2 10 2 3 1 0 20
*/


