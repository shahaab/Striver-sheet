/*

Problem Statement: Given a matrix if an element in the matrix is 0 then you will have to set its entire
column and row to 0 and then return the matrix.
Examples:
Examples 1:
Input: matrix=[[1,1,1],[1,0,1],[1,1,1]]
Output: [[1,0,1],[0,0,0],[1,0,1]]
Explanation: Since matrix[2][2]=0.Therfore the 2nd column and 2nd row will be set to 0.
Input: matrix=[[0,1,2,0],[3,4,5,2],[1,3,1,5]]
Output:[[0,0,0,0],[0,4,5,0],[0,3,1,0]]
Explanation: Since matrix[0][0]=0 and matrix[0][3]=0. Therefore 1st row, 1st column and 4th column will
be set to 0


[[1,1,1],
 [1,0,1]
 [1,1,1]]

[[1,0,1],
 [0,0,0]
 [1,0,1]]

*/

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> setZeroes(vector<vector<int>>& arr){
	int n = arr.size();
	int m = arr[0].size();
	int col = 1;

	for(int i = 0; i < n; i++){
		if(arr[i][0]) col = -1;
		for(int j = 1; j < m; j++){
			if(arr[i][j] == 0) arr[i][0] = -1, arr[0][j] = -1;
		}
	}


	for(int i = n-1; i >= 0; i--){
		for(int j = m-1; j >=0; j--){
			if(arr[i][0] == -1 or arr[0][j] == -1){
				arr[i][j] = 0;
			}
		}

		if(col == -1){
			arr[i][0] = 0;
		}
	}
	return arr;
	}

int main() {
vector < vector < int >> arr;
arr = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
setZeroes(arr);
cout<<"The Final Matrix is "<<endl;
for (int i = 0; i < arr.size(); i++) {
for (int j = 0; j < arr[0].size(); j++) {
cout << arr[i][j] << " ";
}
cout << "\n";
}
}

//TC: N^2
//SC: NO EXTRA SPACE