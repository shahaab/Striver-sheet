// Majority Elements(>N/3 times) | 
// Find the elements that appears more than N/3 times in the array
// Problem Statement: Given an array of N integers. Find the elements that appears more than N/3 times in the array. If no such element exists, return an empty vector.
// Example 1:
// Input: N = 5, array[] = {1,2,2,3,2}
// Ouput: 2
// Explanation: Here we can see that the Count(1) = 1, Count(2) = 3 and Count(3) = 1.Therefore, the count of 2 is greater than N/3 times. Hence, 2 is the answer.
// Example 2:
// Input: N = 6, array[] = {11,33,33,11,33,11}
// Output: 11 33
// Explanation: Here we can see that the Count(11) = 3 and Count(33) = 3. Therefore, the count of both 11 and 33 is greater than N/3 times. Hence, 11 and 33 is the answer.


#include <bits/stdc++.h>
using namespace std;
vector < int > majorityElement(int arr[], int n) {
	vector<int>ans;
	int candidate1 = -1, candidate2 = -1, cnt1 = 0, cnt2 = 0;
	for(int i = 0; i < n; i++){
		if(arr[i] == candidate1){
			cnt1++;
		}else if(arr[i] == candidate2){
			cnt2++;
		}else if(cnt1 == 0){
			candidate1 = arr[i];
		}else if(cnt2 == 0){
			candidate2 = arr[i];
		}else{
			candidate2--;
			candidate1--;
		}
	}
	cnt1 = cnt2 = 0;
	for(int i = 0; i < n; i++){
		if(arr[i] == candidate1){
			cnt1++;
		}else if(arr[i] == candidate2){
			cnt2++;
		}
	}

	if(cnt1 > n/3) ans.push_back(candidate1);
	if(cnt2 > n/3) ans.push_back(candidate2);
	return ans;
}

int main() {
int arr[] = {3,3,2,2,3,2};
vector<int> majority;
majority = majorityElement(arr, 6);
cout << "The majority element is" << endl;
set < int > s(majority.begin(), majority.end());
for (auto it: s) {
cout << it << " ";
}
}