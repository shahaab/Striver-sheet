#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
vector<vector<int>> fourSum(vector<int>& num, int target) {
	vector<vector<int>>v;
	for(int i = 0; i < num - 2; i++){
		int target1 = target - num[i];
		for(int j = i+1; j <num -1; j++){
			int target2 = target1-num[j];
			start = j + 1;
			high = nums.size();
			while(start < high){
				int target3 = num[start] + num[high];
				if(target3 < target2){
					start++;
				}else if(target3 > target2){
					high--;
				}else{
					vector<int>result;
					result.push_back(num[i]);
					result.push_back(num[j]);
					result.push_back(num[start]);
					result.push_back(num[end]);
					res.push_back(result);
					
					while(start<high && num[start] == num[start+1]) start++;
					while(start<high && nums[high] == nums[high-1]) high--;
				}
				while(j+1 < n && num[j] == num[j+1])j++;
			}
			while(i+1 < n && num[i] == num[i+1])i++;
		}
		return res;
	}
};
int main()
{
Solution obj;
vector<int> v{1,0,-1,0,-2,2};
vector<vector<int>> sum=obj.fourSum(v,0);
cout<<"The unique quadruplets are"<<endl;
for (int i = 0; i < sum.size(); i++) {
for (int j = 0; j < sum[i].size(); j++)
cout << sum[i][j] << " ";
cout << endl;
}
}