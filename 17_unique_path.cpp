// Grid Unique Paths | Count paths from left-top to the right bottom of a matrix
// Problem Statement: 
// Given a matrix m X n, count paths from left-top to the right bottom of a matrix 
// with the constraints that from each cell you can either only move to the rightward direction or the downward direction.
// Example 1:
// Input Format: m = 2, n= 2
// Output: 2


#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
int countPaths(int i,int j,int n,int m, vector<vector<int>>& dp){
	if(i==(m-1) && j == (n-1) return 1;
	if(i >= n || j >= m) return 0;
	if(dp[i][j] != -1) return dp[i][j];
	return dp[i][j] = countPaths(i, j+1, n, m, dp) + countPaths(i+1, j, n, m, dp);
}

int uniquePaths(int m, int n) {
	vector<vector<int>> dp(m+1, vector<int>(n+1,-1));
	return countPaths(0,0,m,n, dp);
}
};
int main()
{
Solution obj;
int totalCount= obj.uniquePaths(3,7);
cout<<"The total number of Unique Paths are "<<totalCount<<endl;
}
Output: