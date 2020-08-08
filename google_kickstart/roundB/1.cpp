#include<bits/stdc++.h>

using namespace std;

int n,a[100];

void solve(){
	int c=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=1;i<n-1;i++){
		if(a[i]>a[i-1] and a[i]>a[i+1]){
			c++;
		}
	}
	cout<<c<<endl;
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
