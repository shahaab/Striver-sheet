// Program to generate Pascal’s Triangle
// Problem Statement: Given an integer N, return the first N rows of Pascal’s triangle.
// In Pascal’s triangle, each number is the sum of the two numbers directly above it as shown in the figure below:
// Example 1:
// Input Format: N = 5
// Result:
// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1
// Explanation: There are 5 rows in the output matrix. Each row corresponds to each one of the rows in the image shown above.
// Example 2:
// Input Format: N = 1
// Result:
// 1
// Solution



class Solution {
public:
vector<vector<int>> generate(int numRows) {
	vector<vector<int>>v(numRows);

	for(int i = 0; i < numRows; i++){
		v[i].resize(i+1);
		v[i][0] == v[i][i] = 1;
		for(int j = 1; j < i; j++){
			v[i][j] = v[i-1][j-1] + v[i-1][j];
		}
	}
	return v;
}
};

