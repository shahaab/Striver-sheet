next_permutation : find next lexicographically greater permutation
Problem Statement: Given an array Arr[] of integers, rearrange the numbers of the given array into the lexicographically next greater permutation of numbers.
If such an arrangement is not possible, it must rearrange it as the lowest possible order (i.e., sorted in ascending order).
Example 1 :
Input format: Arr[] = {1,3,2}
Output: Arr[] = {2,1,3}
Explanation: All permutations of {1,2,3} are {{1,2,3} , {1,3,2}, {2,13} , {2,3,1} , {3,1,2} , {3,2,1}}. So, the next permutation just after {1,3,2} is {2,1,3}.
Example 2:
Input format: Arr[] = {3,2,1}
Output: Arr[] = {1,2,3}

class Solution {
public:
	void nextPermutation(vector<int>& nums) {		
		int len = nums.size(), k, l;

		for(k = len - 2; k >= 0; k--){
			if(nums[k] < nums[k+1]){
				break;
			}
		}

		if(k < 0){
			reverse(nums.begin(), nums.end());
		}else{
			for(l = len - 1; l > k; l--){
				if(nums[l] > nums[k]){
					break;
				}
			}
			swap(nums[k], swap[l]);
			reverse(nums.begin()+k+1, nums.end());
		}
		return nums;
	}
};