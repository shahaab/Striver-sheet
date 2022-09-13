class Solution {
public:
	int majorityElement(vector<int>& nums) {
		int cnt(0), candidate = 0;
		for(auto x:nums){
			if(cnt == 0) candidate = x;
			if(candidate == x) cnt++;
			else cnt--;
		}
		return candidate;
	}
};

