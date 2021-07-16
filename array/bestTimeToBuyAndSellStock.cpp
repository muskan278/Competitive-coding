#include <bits/stdc++.h> 
using namespace std;
int maxProfit(int prices[],int n) {
    int min = INT_MAX;
    int ans = 0;
    for(int i = 0; i <n; i++)
    {
        if(prices[i] < min)
            min = prices[i];
        else if(prices[i] - min > ans)
            ans = prices[i] - min;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    
    cout << "Max profit:"<<maxProfit(a,n);
	
	return 0;
}



