int maxLen(int A[], int n){
// Your code here
	unordered_map<int, int>mp;
	int maxi = 0, sum = 0;
	for(int i = 0; i < n; i++){
		sum += A[i];
		if(sum == 0){
			maxi = i + 1;
		}else{
			if(mp.find(sum) != mp.end()){
				maxi = max(maxi, i-mp[sum]);
			}else{
				mp[sum] = i;
			}
		}
	}
	retun maxi;
}