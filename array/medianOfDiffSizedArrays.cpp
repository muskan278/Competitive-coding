#include <bits/stdc++.h>
using namespace std;

double getMedian(int ar1[], int ar2[],int n,int m) {
    int i=0,j=0,m1 = -1, m2 = -1;
    int count;       
    for (count = 0; count <= (m+n)/2; count++)
    {
        m2 = m1;
        if(i != n && j != m)                
            m1 = (ar1[i] > ar2[j]) ? ar2[j++] : ar1[i++];
        else if(i < n)
            m1 = ar1[i++];
        else                       
            m1 = ar2[j++];
    }        
    if((m+n)%2==1)
        return m1;        
    else
        return double(m1 + m2)/2;
}
int main()
{
    int n,m;
    cin>>n>>m;
    int ar1[n];
    for(int i=0;i<n;i++)
    cin>>ar1[i];
    int ar2[m];
    for(int i=0;i<m;i++)
    cin>>ar2[i];

	cout << "Median is "<< getMedian(ar1, ar2, n,m) ;
	return 0;
}