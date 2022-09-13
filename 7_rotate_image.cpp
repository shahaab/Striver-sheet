// Rotate Image by 90 degree
// Problem Statement: Given a matrix, your task is to rotate the matrix by 90 degrees.
// Examples:
// Example 1:
// Input: [[1,2,3],[4,5,6],[7,8,9]]
// Output: [[7,4,1],[8,5,2],[9,6,3]]


// [[1,2,3]
// ,[4,5,6],
//  [7,8,9]]


//  [[7,4,1],
//   [8,5,2],
//   [9,6,3]]


#include<bits/stdc++.h>
using namespace std;
void rotate(vector < vector < int >> & matrix) {
	// for(auto i : matrix) reverse(i.begin(), i.end()); for anti rotate
	reverse(matrix.begin(), matrix.end());
	for(int i = 0; i<matrix.size(); i++){
		for(int j = 0; j < i; j++){
			swap(matrix[i][j], matrix[j][i]);
		}
	}
}
int main() {
vector < vector < int >> arr;
arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
rotate(arr);
cout << "Rotated Image" << endl;
for (int i = 0; i < arr.size(); i++) {
for (int j = 0; j < arr[0].size(); j++) {
cout << arr[i][j] << " ";
}
cout << "\n";
}
}