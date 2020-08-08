#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;
int mpow(int base, int exp); 
void ipgraph(int m);
void dfs(int u, int par);
const int mod = 1000000007;
const int N = 3e5, M = N;
//=======================

vi g[N];
int a[305][305];

int check(int n){
	int i;
	for(i=0;i<n-1;i++){
		if(a[i]>a[j]){
			return 1;
		}
	}
	return 0;
}

int count(int i,int j,int n,int m){
	int c=0;
	if(i-1>=0){
		c+=1;
	}
	if(i+1<n){
		c+=1;
	}
	if(j+1<m){
		c+=1;
	}
	if(j-1>=0){
		c+=1;
	}
	return c;
}

int main() {
	ios_base::sync_with_stdio(0);
	int t, i, j, k, p, q, r, x, y, u, v, n, m;
	cin>>t;
	while(t--){
		u=0;
		cin>>n>>m;
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				cin>>a[i][j];
				if(count(i,j,n,m)<a[i][j]){
					u=1;
				}
			}
		}
		if(u){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
			for(i=0;i<n;i++){
				for(j=0;j<m;j++){
					a[i][j]=count(i,j,n,m);
					//			deb(i);
					//			deb(j);
					//			deb(a[i][j]);
					cout<<a[i][j]<<" ";
				}
				cout<<endl;
			}
		}
	}
	return 0;
}

int mpow(int base, int exp) {
	base %= mod;
	int result = 1;
	while (exp > 0) {
		if (exp & 1) result = ((ll)result * base) % mod;
		base = ((ll)base * base) % mod;
		exp >>= 1;
	}
	return result;
}

void ipgraph(int n, int m){
	int i, u, v;
	while(m--){
		cin>>u>>v;
		g[u-1].pb(v-1);
		g[v-1].pb(u-1);
	}
}

void dfs(int u, int par){
	for(int v:g[u]){
		if (v == par) continue;
		dfs(v, u);
	}
}


