// Problem Statement: Given an integer array arr, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum and print the subarray.
// Examples:
// Example 1:
// Input: arr = [-2,1,-3,4,-1,2,1,-5,4]
// Output: 6
// Explanation: [4,-1,2,1] has the largest sum = 6.
// Examples 2:
// Input: arr = [1]


#include<bits/stdc++.h>
using namespace std;
int maxSubArray(vector < int > & nums, vector < int > & subarray) {
	int tot = nums[0], minn = nums[0], maxx =nums[0];

	for(int i = 1; i < nums.size(); i++){
		if(nums[i] < 0){
			swap(minn, maxx);
		}
		maxx = max(nums[i], maxx*nums[i]);
		minn = min(nums[i], minn*nums[i]);

		tot = max(tot, maxx);
	}
	return tot;
}

int main() {
	vector<int> arr{-2,1,-3,4,-1,2,1,-5,4};
	vector < int > subarray;
	int lon = maxSubArray(arr, subarray);
	cout << "The longest subarray with maximum sum is " << lon << endl;
	cout << "The subarray is " << endl;
	for (int i = subarray[0]; i <= subarray[1]; i++) {
		cout << arr[i] << " ";
	}
}