// C++ program to find number of operations
// to make an array palindrome
#include <bits/stdc++.h>
using namespace std;

int findMinOps(int arr[], int n)
{
	int ans = 0,i=0,j=n-1;
	while(i<=j)
	{
		// If corner elements are same, problem reduces arr[i+1..j-1]
		if (arr[i] == arr[j])
		{
			i++;
			j--;
		}
		// If left element is greater, then we merge right two elements
		else if (arr[i] > arr[j])
		{
			arr[j-1] += arr[j] ;
			j--;ans++;
		}
		// Else we merge left two elements
		else
		{
			arr[i+1] += arr[i];
			i++;ans++;
		}
	}

	return ans;
}
int main()
{
	int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
	cout << "Count of minimum merges is "<< findMinOps(a, n) << endl;
	return 0;
}
