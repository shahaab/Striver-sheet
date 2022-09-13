// Search in a sorted 2D matrix
// Problem Statement: Given an m*n 2D matrix and an integer, write a program to find if the given integer exists in the matrix.
// Given matrix has the following properties:
// Integers in each row are sorted from left to right.
// The first integer of each row is greater than the last integer of the previous row
// Example 1:
// Input: matrix =
// [[1,3,5,7],
// [10,11,16,20],
// [23,30,34,60]],
// target = 3
// Output: true



class Solution {
public:
bool searchMatrix(vector<vector<int>>& matrix, int target) {
		int lo = 0, high = matrix.size();
		while(lo <= high){
			int mid = lo + (high - lo)/2;
			if(matrix[mid/matrix.size()][mid%matrix.size()] == target){
				return true;
			}else if(matrix[mid/matrix.size()][mid%matrix.size()] < target){
				lo = mid + 1;
			}else{
				high = mid - 1;
			}
		}
	}
};