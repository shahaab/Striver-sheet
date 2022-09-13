int countPlatforms(int n,int arr[],int dep[])
{
	sort(arr, arr+n);
	sort(dep, dep+n);

	int ans = 1, cnt = 1, i = 1, j = 0;
	while(i<n && j<n){
		if(arr[i] <= dep[j]){
			cnt++;
			i++;
		}else{
			cnt--;
			j++;
		}
		ans = max(ans, count);
	}
	return ans;
}