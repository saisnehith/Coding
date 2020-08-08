#include<bits/stdc++.h>

using namespace std;

const int maxN=2e5;

int n,k,a[maxN];

void solve(){
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int ans=0,ok,i,j;
	for(i=k-1;i<n;i++){
		ok=1;
		for(j=1;j<=k && ok;j++){
			if(a[i+1-j]!=j){
				ok=0;
			}
		}
		ans+=ok;
	}
	cout<<ans<<endl;
}

int main( ){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		cout<<"Case #"<<i<<": ";
		solve();
	}
	return 0;
}
