#include<bits/stdc++.h>

using namespace std;

int main( ){
	int t;
	cin>>t;
	while(t--){
		int i,j,n,k,ans;
		cin>>n>>k;
		for(i=1;i<=k and i*i<=n;i++){
			if(!(n%i)){
				if(n/i>k){
					ans=n/i;
				}
				else{
					ans=i;
					break;
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
