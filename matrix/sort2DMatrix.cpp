#include <bits/stdc++.h>
using namespace std;
//O(N^2LogN)
class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> mat) {
        vector<int> temp;
        int r=mat.size(),c=mat[0].size();
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            temp.push_back(mat[i][j]);
        }
        sort(temp.begin(),temp.end());
        int k=0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            mat[i][j]=temp[k++];
        }
        return mat;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<vector<int>> v(N, vector<int>(N));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++) cin >> v[i][j];
        Solution ob;
        v = ob.sortedMatrix(N, v);
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) cout << v[i][j] << " ";
            cout << "\n";
        }
    }
} 