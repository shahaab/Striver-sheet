#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> p32;
typedef pair<ll, ll> p64;
typedef pair<double, double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int>> vv32;
typedef vector<vector<ll>> vv64;
typedef vector<vector<p64>> vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
#define forn(i, e) for (ll i = 0; i < e; i++)
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18                                
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

void solve()
{   int n,m,a,d,z(0);
    cin >> n>> m >> a >> d;
    for(int i=n;i<=m;i++){
        for(int j=0;j< 5;j++){
            if(i/(a+(j*d))!=0){
                z++;
            }
        }
    }
    cout << z << endl;
}
int main()
{
        #ifndef ONLINE_JUDGE              
 freopen("input.txt","r",stdin);    
 freopen("output.txt","w",stdout); 
 #endif 
    fast_cin();
    int tc;
    cin >>tc;
    while(tc-->0){
    solve();
    }
    return 0;
}
