using namespace std;
int main() {
int V = 49;
vector < int > ans;
int coins[] = {1, 2, 5, 10, 20, 50, 100, 500, 1000};
int n = 9;
int cnt=0;
for(int i = n-1; i >= 0; i--){
	while(coins[i] >= V){
		V -=coins[i];
		cnt++;
		ans.push_back(coins[i]);
	}
}
return cnt;
}