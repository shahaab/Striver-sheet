// Merge two Sorted Arrays Without Extra Space
// Problem statement: Given two sorted arrays arr1[] and arr2[] of sizes n and m in non-decreasing order. Merge them in sorted order. Modify arr1 so that it contains the first N elements and modify arr2 so that it contains the last M elements.
// Input:
// n = 4, arr1[] = [1 4 8 10]
// m = 5, arr2[] = [2 3 9]


#include<bits/stdc++.h>
using namespace std;
void merge(int arr1[], int arr2[], int n, int m) {
	int i = 0;
	while(arr1[n-1] > arr2[0]){
		if(arr1[i] > arr2[0]){
			swap(arr1[i], arr2[0]);
			sort(arr2, arr2+m);
		}
		i++;
	}
	
}

void merge(int arr1[], int arr2[], int n, int m) {
        int i=0;
        // while loop till last element of array 1(sorted) is greater than
          // first element of array 2(sorted)
        while(arr1[n-1]>arr2[0])
        {
            if(arr1[i]>arr2[0])
            {
                // swap arr1[i] with first element
                  // of arr2 and sorting the updated
                // arr2(arr1 is already sorted)
                swap(arr1[i],arr2[0]);
                sort(arr2,arr2+m);
            }
            i++;
        }
    }

int main() {
int arr1[] = {1,4,7,8,10};
int arr2[] = {2,3,9};
cout << "Before merge:" << endl;
for (int i = 0; i < 5; i++) {
cout << arr1[i] << " ";
}
cout << endl;
for (int i = 0; i < 3; i++) {
cout << arr2[i] << " ";
}
cout << endl;
merge(arr1, arr2, 5, 3);
cout << "After merge:" << endl;
for (int i = 0; i < 5; i++) {
cout << arr1[i] << " ";
}
cout << endl;
for (int i = 0; i < 3; i++) {
cout << arr2[i] << " ";
}
}

#include<bits/stdc++.h>
using namespace std;
void merge(int arr1[], int arr2[], int n, int m) {
// code here
int i, k;
for (i = 0; i < n; i++) {
if(arr1[i] > arr2[0]) {
int temp = arr1[i];
arr1[i] = arr2[0];
arr2[0] = temp;
}
int first = arr2[0];
// insertion sort is used here
for (k = 1; k < m && arr2[k] < first; k++) {
arr2[k - 1] = arr2[k];
}
arr2[k - 1] = first;
}
}
int main() {
int arr1[] = {1,4,7,8,10};
int arr2[] = {2,3,9};
cout << "Before merge:" << endl;
for (int i = 0; i < 5; i++) {
cout << arr1[i] << " ";
}
cout << endl;
for (int i = 0; i < 3; i++) {
cout << arr2[i] << " ";
}
cout << endl;
merge(arr1, arr2, 5, 3);
cout << "After merge:" << endl;
for (int i = 0; i < 5; i++) {
cout << arr1[i] << " ";
}
cout << endl;
for (int i = 0; i < 3; i++) {
cout << arr2[i] << " ";
}
}