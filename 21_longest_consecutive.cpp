#include<bits/stdc++.h>
using namespace std;
int longestConsecutive(vector < int > & nums) {
	set<int>s;
	for(auto x:nums){
		s.insert(x);
	}

	int cnt = 0;
	for(auto x:nums){
		if(!s.count(x-1)){
			int curr_num = x;
			int curr_cnt = 1;
			while(s.count(x+1)){
				curr_cnt++;
				curr_num++;
			}
			cnt = max(cnt, curr_cnt);
		}
	}
	return cnt;
}
int main() {
vector<int> arr{100,200,1,2,3,4};
int lon = longestConsecutive(arr);
cout << "The longest consecutive sequence is " << lon << endl;
}