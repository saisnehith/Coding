#include<bits/stdc++.h>

using namespace std;

int n,k,a[100000];

int check(int D){
	int i=0,c=0;
	for(i=1;i<n;i++){
		int d=a[i]-a[i-1];
		c+=(d-1)/D;
	}
	if(c<=k){
		return 1;
	}
	return 0;
}

int binarysearch(int lo,int hi){
	while(lo<hi){
		int mid=(lo+hi)/2;
		if(check(mid)){
			hi=mid;
		}
		else{
			lo=mid+1;
		}
	}
	return lo;
}

void solve(){
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<binarysearch(1,1e9)<<endl;
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
