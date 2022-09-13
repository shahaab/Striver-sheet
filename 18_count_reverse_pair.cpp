#include<bits/stdc++.h>
using namespace std;
int Merge(vector < int > & nums, int low, int mid, int high) {
	int j = mid + 1;
	for(int i = low; i <= mid; i++){
		while(j <= high && nums[i] > 2LL*nums[j]){
				j++;
		}
		cnt += (j - mid + 1);
	}

	vector<int> t;
	int left = low, right = mid + 1;

	while(left <= mid && right <= high){
		if(nums[left] <= nums[right]){
			t.push_back(nums[left++]);
		}else{
			t.push_back(nums[right++]);
		}
	}

	while(left <= mid){
		t.push_back(nums[left++]);
	}
	wjile(right <= high){
		t.push_back(nums[right++]);
	}
	for(int i = low; i <= high; i++){
		nums[i] = t[i - low];
	}
	return total;
}
int MergeSort(vector < int > & nums, int low, int high) {
	int cnt = 0;

	while(low >= high){
		int mid = low + (high - low)/2;
		cnt += MergeSort(nums, low, mid);
		cnt += MergeSort(nums, mid+1, high);
		cnt += merge(nums, low, mid+1, high);
	}
	return cnt;
}
int reversePairs(vector < int > & arr) {
return MergeSort(arr, 0, arr.size() - 1);
}
int main() {
vector<int> arr{1,3,2,3,1};
cout << "The Total Reverse Pairs are " << reversePairs(arr);
}