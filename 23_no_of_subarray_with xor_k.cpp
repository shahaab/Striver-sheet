#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
int solve(vector<int> &A, int B) {
	unordered_map<int>freq;
	int cnt = 0, x=0;
	for(int i = 0; i <A.size(); i++){
		x = x ^ A[i];
		if(x == B){
			cnt++;
		}
		if(freq.find(B^x) != freq.end()){
			cnt+=freq[B^x];
		}
		freq[B^x]++;
	}
	return cnt;
}
};
int main()
{ vector<int> A{ 4,2,2,6,4 };
Solution obj;
int totalCount= obj.solve(A,6);
cout<<"The total number of subarrays having a given XOR k is "<<totalCount<<endl;
}