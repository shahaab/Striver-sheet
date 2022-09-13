#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
int lengthofLongestSubstring(string s) {
	vector<int>fre(256,-1);
	int len = 0;
	int left = 0, right = 0;
	int n = s.size();
	while(left < n){
		if(freq[right] != 0){
			left = max(left, freq[s[right]] +1);
		}
		freq[s[right]] = right;
		len = max(len, right-left+1);
		right++;
	}
	return len;
};
int main() {
string str = "takeUforward";
Solution obj;
cout << "The length of the longest substring without repeating characters is " << obj.lengthofLongestSubstring(str);
return 0;
}
Output: