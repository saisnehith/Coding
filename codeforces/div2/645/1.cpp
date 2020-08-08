#include<bits/stdc++.h>

using namespace std;

int main( ){
	int t;
	cin>>t;
	while(t--){
		long long int n,m,c,ans;
		cin>>n>>m;
		if(m%2==0){
			ans=n*(m/2);
		}
		else{
			ans=n*(m/2);
			if(n%2==0){
				ans+=(n/2);
			}
			else{
				ans+=(n/2)+1;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
