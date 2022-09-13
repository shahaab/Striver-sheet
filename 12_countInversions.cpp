#include<bits/stdc++.h>
using namespace std;
int merge(int arr[],int temp[],int left,int mid,int right){
	int cnt = 0;
	int i = left;
	int j = mid;
	int k = left;

	while((i<= mid -1) && (j <= right)){
		if(arr[i] <= arr[j]){
			temp[k++] = arr[i++];
		}else{
			temp[k++] = arr[j++];
			cnt += mid - i;
		}
	}

	while(i <= mid -1){
		temp[k++] = arr[i++];
	}
	while(j <= right){
		temp[k++] = arr[j++];
	}

	for(int i = left; i <= right; i++){
		arr[i] = temp[i];
	}
	return cnt;
}

int merge_sort(int arr[],int temp[],int left,int right){
	int mid, cnt = 0;
	if(right > left){	
		int mid = left + (right - left)/2;
		cnt += merge_sort(arr, temp, left, mid);
		cnt += merge_sort(arr, temp, mid+1, right);
		cnt += merge(arr, temp, left, mid+1, right);
	}

	return cnt;

}

int main(){
	int arr[]={5,3,2,1,4};
	int n=5;
	int temp[n];
	int ans = merge_sort(arr,temp,0,n-1);
	cout<<"The total inversions are "<<ans<<endl;
	return 0;
}