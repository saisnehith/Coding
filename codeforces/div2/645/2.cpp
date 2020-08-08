#include<bits/stdc++.h>

using namespace std;

int main( ){
	int t;
	cin>>t;
	while(t--){
		int i,n,a[100005],ans;
		cin>>n;
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
ans=1;
		for(i=n-1;i;i--){
			if(a[i]<=i+1){
				ans=i+2;
				break;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}

