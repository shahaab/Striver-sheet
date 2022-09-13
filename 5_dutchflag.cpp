// Sort an array of 0s, 1s and 2s
// Problem Statement: Given an array consisting of only 0s, 1s and 2s. Write a program to in-place sort the array without using inbuilt sort functions. ( Expected: Single pass-O(N) and constant space)
// Example 1:
// Input: nums = [2,0,2,1,1,0]
// Output: [0,0,1,1,2,2]
// Input: nums = [2,0,1]
// Output: [0,1,2]
// Input: nums = [0]
// Input: nums = [0]


class Solution {
public:
	void sortColors(vector<int>& nums) {
		int low = 0, mid = 0, high = nums.size();
		while(mid < high){
			switch(nums[mid]){
				case 0: swap(nums[low++], nums[mid++]);
						break;
				case 1:	mid++;
						break;
				case 2: swap(nums[mid], nums[high--]);
						break;
			}
		}
	}
};