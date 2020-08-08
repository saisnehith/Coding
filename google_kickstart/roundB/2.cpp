#include<bits/stdc++.h>


using namespace std;

long long int n,a[1000],D;

int check(long long int x){
	long long int s=x*a[0];
	for(int i=1;i<n;i++){
		s=((s+a[i]-1)/a[i])*a[i];
		if(s>D){
			return 0;
		}
	}
	return 1;
}

void solve(){
	cin>>n>>D;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	long long int lo=1,hi=D/a[0];
	while(lo<hi){
		long long int mid=(lo+hi+1)/2;
		if(check(mid)){
			lo=mid;
		}
		else{
			hi=mid-1;
		}
	}
	cout<<lo*a[0]<<endl;
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
