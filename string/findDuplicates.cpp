// C++ program to count all duplicates from string using maps
//Time Complexity: O(N log N), where N = length of the string passed and it generally takes logN time for an element insertion in a map.
// Space Complexity: O(K), where K = size of the map (0<=K<=input_string_length)
/*
Note: Hashing involves the use of an array of fixed size each time no matter whatever the string is. 

For example, str = “aaaaaaaaaa”. 
An array of size 256 is used for str, only 1 block out of total size (256) will be utilized to store the number of occurrences of ‘a’ in str (i.e count[‘a’] = 10). 
Rest 256 – 1 = 255 blocks remain unused. 

Thus, Space Complexity is potentially high for such cases. So, to avoid any discrepancies and to improve Space Complexity, maps are generally preferred over long-sized arrays. 
*/
#include <bits/stdc++.h>
using namespace std;
void printDuplicates(string str)
{
	map<char, int> count;
	for (int i = 0; i < str.length(); i++)
		count[str[i]]++;
    cout<<"Duplicates:\n";
	for (auto it : count) {
		if (it.second > 1)
			cout<<it.first <<" count = " << it.second<< "\n";
	}
}
int main()
{
	string str;
    getline (cin,str);
	printDuplicates(str);
	return 0;
}
