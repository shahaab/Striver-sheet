#include<bits/stdc++.h>
using namespace std;
int trap(vector < int > & height) {
	int res = 0;
	int l = 0, r = height.size();
	int LH = 0, RH = 0;
	while(l <= r){
		if(height[l] <= height[r]){
			if(height[l] >= LH){
				LH = height[l];
			}else{
				res += LH - height[l];
			}
			l++;
		}else{
			if(height[r] >= RH){
				RH = height[r];
			}else{
				res += RH - height[r];
			}
			r--;
		}
	}
	return res;
}