#include<bits/stdc++.h>

using namespace std;

int main( ){
	int t;
	cin>>t;
	while(t--){
		int a,b,n,ans=0;
		cin>>a>>b>>n;
		while(max(a,b)<=n){
			if(a<b){
				a+=b;
			}
			else{
				b+=a;
			}
			ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}
