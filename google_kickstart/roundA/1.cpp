#include<bits/stdc++.h>

using namespace std;

int n,b,a[100000];

void solve(){
	cin>>n>>b;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int ans=0;
	for(int i=0;i<n;i++){
		if(b>=a[i]){
			b-=a[i];
			ans++;
		}
	}
	cout<<ans<<endl;
}

int main( ){
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		cout<<"Case #"<<i<<": ";
		solve();
	}
	return 0;
}
