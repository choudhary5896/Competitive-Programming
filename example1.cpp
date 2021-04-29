#include<bits/stdc++.h>
// Useful constants
#define INF  (int)1e9
#define EPS   1e-9
#define MOD 1000000007ll
#define Pi 3.14159
// for input-output
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
// iteration macros: have advantage of auto-casting and not recomputing arguments
#define rep(i,a,n) for (int i=a;i<n;i++)
#define per(i,a,n) for (int i=n-1;i>=a;i--)
#define setBit(S, j) (S |= (1 << j))
#define clearBit(S, j) (S &= ~(1 << j))
#define toggleBit(S, j) (S ^= (1 << j))
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
// input macro
#define IN(x,n)   for(ll e=0;e<n;e++){ll y;cin>>y;x.PB(y);}
//output macro
#define print(x)    for(auto it:x) cout<<it<<' '; cout<<"\n";
#define printPI(x)  for(auto it:x) cout<<it.F<<' '<<it.S<<'\t';  cout<<"\n";
// shortcut for data type
#define ll long long
#define PI pair<int,int>
#define PL pair<ll,ll>
#define VI vector<int>
#define VL vector<ll>
#define VVI vector<VI>
#define VVL vector<VL>
#define VVVI vector<VVI>
#define VVVL vector<VVL>
#define VPI vector<PI>
#define VPL vector<PL>
#define PB push_back
#define PPB pop_back
#define EB emplace_back
#define MP make_pair
#define F first
#define S second
#define uset unordered_set
#define umap unordered_map
#define dbg(x, y) cout << x << " = " << y << endl
#define mt make_tuple


// cp --namespace
using namespace std;


// cp --const
const int Ntest = 1e5 + 5;


// cp --useful function
ll gcd(ll a, ll b){ll temp;while (b > 0){temp = a%b;a = b;b = temp;} return a;}
ll lcm(ll a, ll b){return a*b/gcd(a,b);}
ll fpow(ll  b, ll exp, ll mod){if(exp == 0) return 1;ll t = fpow(b,exp/2,mod);if(exp&1) return t*t%mod*b%mod;return t*t%mod;}
ll divmod(ll i, ll j, ll mod){i%=mod,j%=mod;return i*fpow(j,mod-2,mod)%mod;}


// cp --clock funtion
clock_t time_p=clock();
void TimeTaken()
{
    time_p=clock()-time_p;
    cerr<<"Completion time : "<<(float)(time_p)/CLOCKS_PER_SEC<<"\n";
}

//cp --solve 
void dfs(vector<vector<char>> &a, int &count, int i, int j) {
    if(i>-1 && i<a.size() && j>-1 && j<a[0].size()) {
       
        if(a[i][j]=='1') {
            a[i][j]='0';
            ++count;
            dfs(a,count,i+1,j);
            dfs(a,count,i-1,j);
            dfs(a,count,i,j+1);
            dfs(a,count,i,j-1);
        }
    }
}



void solve()
{
int n,m;
cin>>n>>m;
vector<vector<char>> a(n,vector<char>(m,0));
vector<int>ans;
for(int i=0;i<n;i++)
{
	for(int j=0;j<m;j++)
		cin>>a[i][j];
}
int count=0;
for(int i=0;i<n;i++)
{
	for(int j=0;j<m;j++)
	{

	count=0;
	if(a[i][j]=='1')
		dfs(a,count,i,j);
    
    if(count>0)ans.push_back(count);
    }
}
sort(ans.begin(),ans.end(),greater<int>());
int chef=0;
for(int i=1;i<ans.size();i+=2)
 chef+=ans[i];
cout<<chef<<"\n";




}

//cp --main function
int main() {
	#ifndef ONLINE_JUDGE
		freopen ("ip.txt" , "r" , stdin);
		freopen ("opt.txt", "w" , stdout);
	#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll test = 1;
	cin >> test;
	while(test--) {
		solve();
	}
	return 0;
}