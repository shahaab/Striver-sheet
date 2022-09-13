#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
	void solve(int ind, vector<int>&arr, int n, vector<int>&ans, int sum){
		if(ind == n){
			ans.push_back(sum);
			return;
		}

		//pick
		sum+=(arr[ind]);
		solve(ind+1, arr, n, ans, sum);

		sum-=arr[ind];
		solve(ind +1, arr, n, ans,sum);
	}

	vector<int> subsetSums(vector<int> arr, int n){
		vector<int> ans;
		solve(0, arr, n, ans, 0);
		sort(ans.begin(), ans.end());
		return ans;
	}
};

int main(){
	vector<int>arr{3, 1, 2};
	Solution obj;
	vector<int>ans = obj.subsetSums(arr, arr.size());
	sort(ans.begin(), ans.end());
	cout<<"The sum of each subset is" <<endl;
	for(auto sum:ans){
		cout<<sum<<" ";
	}
	cout<<endl;
}