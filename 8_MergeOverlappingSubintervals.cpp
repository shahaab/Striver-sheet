// Merge Overlapping Sub-intervals
// Problem Statement: Given an array of intervals, merge all the overlapping intervals and return an array of non-overlapping intervals.
// Examples
// Example 1:
// Input: intervals=[[1,3],[2,6],[8,10],[15,18]]
// Output: [[1,6],[8,10],[15,18]]



#include<bits/stdc++.h>
using namespace std;
vector < vector < int >> merge(vector < vector < int >> & intervals) {
	sort(intervals.begin(), intervals.end());
	vector < vector < int >> newIntervals;
	newIntervals.push_back(intervals[0]);
	for(int i = 1; i < intervals.size(); i++){
		if(intervals[i][0] > newIntervals.back()[1]){
			vector < int > v{intervals[i][0], intervals[i][1]};
			newIntervals.push_back(v);
		}else{
			newIntervals.back()[1] = max(newIntervals.back()[1], intervals[i][1]);
		}
	}
	return newIntervals;
}



int main() {
vector < vector < int >> arr;
arr = {{1, 3}, {2, 4}, {2, 6}, {8, 9}, {8, 10}, {9, 11}, {15, 18}, {16, 17}};
vector < vector < int >> ans = merge(arr);
cout << "Merged Overlapping Intervals are " << endl;
for (auto it: ans) {
cout << it[0] << " " << it[1] << "\n";
}
}