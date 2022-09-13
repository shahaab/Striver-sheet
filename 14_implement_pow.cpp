// Implement Pow(x,n) | X raised to the power N
// Problem Statement: Given a double x and integer n, calculate x raised to power n. Basically Implement pow(x, n).
// Input: x = 2.00000, n = 10
// Output: 1024.00000
// Explanation: You need to calculate 2.00000 raised to 10 which gives ans 1024.00000
// Input: x = 2.10000, n = 3
// Output: 9.26100
// Explanation: You need to calculate 2.10000 raised to 3 which gives ans 9.26100


#include<bits/stdc++.h>
using namespace std;
double myPow(double x, int n) {
	double ans = 1.0;
	long long int nn = n;
	if(nn < 0) nn *= -1;

	while(nn){
		if(nn % 2 == 1){
			ans *= x;
			nn--;
		}else{
			x *= x;
			nn /= 2;
		}
	}
	if(n < 0){
		ans = double(1.0) / double(ans);
	}
	return ans;
}

int main() {
cout << myPow(2, 10) << endl;
}