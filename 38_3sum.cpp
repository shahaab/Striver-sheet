Problem Statement: Given an array of N integers, your task is to find unique triplets that add up to give sum zero. In short, you need to return an array of all the unique triplets [arr[a], arr[b], arr[c]] such that i!=j, j!=k, k!=i, and their sum is equal to zero.
Examples:
Example 1:
Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]


#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> threeSum(vector<int>& num) {
	vector<int>res;
	sort(num.begin(), num.end());
	for(int i = 0; i < num.size(); i++){
		if(i == 0 || (i>0 && nums[i] == nums[i-1])){
			int target = 0 - num[i], lo = 0, hi = num.size() - 1;
			while(lo < hi){
				if(target == num[lo] + num[hi]){
					vector<int>ans;
					ans.push_back(num[i]);
					ans.push_back(num[lo]);
					ans.push_back(num[hi]);

					res.push_back(ans);

					while(lo < hi && num[lo] == num[lo + 1]) lo++;
					while(lo < hi && num[hi + 1] == num[hi]) hi--;
				}else if(target < num[lo] + num[hi]){
					lo++;
				}else{
					hi--;
				}
			}
		}
		return res;
	}
}