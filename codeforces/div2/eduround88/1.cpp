#include<bits/stdc++.h>

using namespace std;

int main( ){
	int t;
	cin>>t;
	while(t--){
		int n,m,k,c,d,ans;
		cin>>n>>m>>k;
		c=min(n/k,m);
		if(m<=(n/k)){
			ans=m;
		}
		else{
			d=m-c;
			ans=d/(k-1);
			if(d%(k-1)){
				ans+=1;
			}
			ans=c-ans;
		}
		cout<<ans<<endl;
	}
	return 0;
}
