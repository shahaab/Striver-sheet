bool static comp(Job a, Job b){
	return(a.profit > b.profit);
}

pair < int, int > JobScheduling(Job arr[], int n) {
	sort(arr, arr+n, comp);
	int maxx=0;
	for(int i = 0; i<n;i++){
		maxx = max(maxx, arr[i].deadline);
	}
	vector<int>v(maxx, -1);
	int cntJobs = 0, jobProfits = 0;
	for(int i = 0; i<n;i++){
		for(int j = arr[i].deadline; j>0; j--){
			if(v[j] == -1){
				cntJobs++;
				v[j] = i;
				jobProfits += arr[i].profit;
				break;
			}
		}
	}
	return make_pair(countJobs, jobProfits);
}