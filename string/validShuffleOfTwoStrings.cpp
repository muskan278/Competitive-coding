#include <bits/stdc++.h>
using namespace std;
bool validShuffle(string str1,string str2,string str3)
{
	unordered_map<char, int> count;

	for (int i = 0; i < str1.length(); i++)
		count[str1[i]]++;
    for (int i = 0; i < str2.length(); i++)
		count[str2[i]]++;

    for (int i = 0; i < str3.length(); i++)
		count[str3[i]]--;
	for (auto it : count) {
		if (it.second!=0)
			return false;
    }
    return true;
}

int main()
{
	string str1,str2,str3;
    cin>>str1>>str2; //XY 12
    string s1=str1,s2=str2,s3;
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
    std::vector<std::string> results{"1XY2", "Y1X2", "Y21XX"};
    // call the method to check if result string is
    // shuffle of the string first and second
    for (int i=0;i<results.size();i++) {
        str3=results[i];
        s3=str3;
        transform(str3.begin(), str3.end(), str3.begin(), ::tolower);
	    if(validShuffle(str1,str2,str3))
        cout<<s3<<" is valid shuffle of "<<s1<<" and "<<s2<<endl;
        else
        cout<<s3<<" is not valid shuffle of "<<s1<<" and "<<s2<<endl;

    }
	return 0;
}
