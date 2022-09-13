// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1

// 4
// 1331




class Solution {
public:
vector<vector<int>> generate(int numRows) {
	vector<int>v(numRows, 1);

	for(int i = 2; i <= numRows; i++){
		for(int j = i - 1; j > 0; j--){
			v[j] = v[j-1] + v[j];
		}
	}
}
};

