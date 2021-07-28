// C++ program to check if two given strings are rotations of each other
# include <bits/stdc++.h>
using namespace std;
/*
    1. Create a temp string and store concatenation of str1 to
       str1 in temp.
                          temp = str1.str1
    2. If str2 is a substring of temp then str1 and str2 are 
       rotations of each other.
*/
bool areRotations(string str1, string str2)
{
    if (str1.length() != str2.length())
        return false;

    string temp = str1 + str1;
    return (temp.find(str2) != string::npos);
}

int main()
{
    string str1 = "AACD", str2 = "ACDA";
    cin>>str1>>str2;
    if(areRotations(str1, str2))
        cout<<"Strings are rotations of each other";
    else
        cout<<"Strings are not rotations of each other";
    return 0;
}
