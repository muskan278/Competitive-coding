// A Simple Merge based O(n) solution to find median of two sorted arrays
#include <bits/stdc++.h>
using namespace std;

int getMedian(int ar1[],int ar2[], int n)
{
	int i = 0,j=0;
	int count;
	int m1 = -1, m2 = -1;

	/* Since there are 2n elements, median will be average of elements
	at index n-1 and n in the array obtained after merging ar1 and ar2 */
	for (count = 0; count <= n; count++)
	{
		/* Below is to handle case where all elements of ar1[] are
		smaller than smallest(or first) element of ar2[]*/
		if (i == n)
		{
			m1 = m2;
			m2 = ar2[0];
			break;
		}
		/*Below is to handle case where all elements of ar2[] are
		smaller than smallest(or first) element of ar1[]*/
		else if (j == n)
		{
			m1 = m2;
			m2 = ar1[0];
			break;
		}
		/* equals sign because if two arrays have some common elements */
		if (ar1[i] <= ar2[j])
		{
			/* Store the prev median */
			m1 = m2;
			m2 = ar1[i];
			i++;
		}
		else
		{
			/* Store the prev median */
			m1 = m2;
			m2 = ar2[j];
			j++;
		}
	}

	return (m1 + m2)/2;
}

int main()
{
    int n1,n2;
    cin>>n1>>n2;
    int ar1[n1];
    for(int i=0;i<n1;i++)
    cin>>ar1[i];
    int ar2[n2];
    for(int i=0;i<n2;i++)
    cin>>ar2[i];

	if (n1 == n2)
		cout << "Median is "<< getMedian(ar1, ar2, n1) ;
	else
		cout << "Doesn't work for arrays"<< " of unequal size" ;

	return 0;
}
