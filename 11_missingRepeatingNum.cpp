vector < int >Solution::repeatedNumber (const vector < int >&arr) {
	int xor1,x, y;

	for(int i = 0; i <arr.size(); i++){
		xor1 ^= arr[i];
	}

	for(int i = 1; i <= arr.size(); i++){
		xor1 ^= i;
	}

	int set_bit_no = xor1 & ~(xor1 - 1);

	for(int i = 0; i < arr.size(); i++){
		if(xor1 & set_bit_no){
			x ^= arr[i];
		}else{
			y ^= arr[i];
		}
	}

	for(int i = 1; i <= arr.size(); i++){
		if(xor1 & i){
			x^=i;
		}else{
			y^=i;
		}
	}

// NB! numbers can be swapped, maybe do a check ?
int x_count = 0;
for (int i=0; i<n; i++) {
if (arr[i]==x)
x_count++;
}
if (x_count==0)
return {y, x};
return {x, y};
}