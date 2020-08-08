#include<bits/stdc++.h>

using namespace std;

int main( ){
	int t;
	cin>>t;
	while(t--){
		long long int a,b,c,k,i,j,ans1=-1,ans2=-1;
		cin>>a>>b>>c;
		if(c<a*b){
			ans2=b;
		}
		if(a<c){
			ans1=1;
		}
		cout<<ans1<<" "<<ans2<<endl;
	}
	return 0;
}
