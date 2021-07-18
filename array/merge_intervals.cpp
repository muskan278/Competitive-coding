// C++ program to merge overlapping Intervals in O(n Log n) time and O(1) extra space.
#include<bits/stdc++.h>
using namespace std;

// An Interval
struct Interval
{
	int s, e;
};

bool mycomp(Interval a, Interval b)
{ return a.s < b.s; }

void mergeIntervals(Interval arr[], int n)
{
	// Sort Intervals in increasing order of start time
	sort(arr, arr+n, mycomp);

	int index = 0; // Stores index of last element in output array (modified arr[])

	// Traverse all input Intervals
	for (int i=1; i<n; i++)
	{
		// If this is not first Interval and overlaps with the previous one
        //i.e. previous ka end >= current ka start
		if (arr[index].e >= arr[i].s)
		{
			// Merge previous and current Intervals
			arr[index].e = max(arr[index].e, arr[i].e);
			arr[index].s = min(arr[index].s, arr[i].s);
		}
		else {
			index++;
			arr[index] = arr[i];
		}
	}

	// Now arr[0..index-1] stores the merged Intervals
	cout << "\nThe Merged Intervals are: ";
	for (int i = 0; i <= index; i++)
		cout << "[" << arr[i].s << ", " << arr[i].e << "] ";
}

int main()
{
	int n;
    cin>>n;
	Interval arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i].s>>arr[i].e;
    }
	mergeIntervals(arr, n);
	return 0;
}
