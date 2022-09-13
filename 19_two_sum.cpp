vector<int> twoSum(vector<int>& nums, int target) {
	unordered_map<int>mp;
	for(int i = 0; i<nums.size(); i++){
		int val = target - nums[i];
		if(mp.find(val) != mp.end()){
			return {i, mp[val]};
		}
		mp[nums[i]] = i;
	}
	return {};
}