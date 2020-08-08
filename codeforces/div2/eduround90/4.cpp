#include<bits/stdc++.h>

using namespace std;

int main( ){
	int t;
	cin>>t;
	while(t--){
		long long int i,j,k,s=0,n,maxi=0,os=0,es=0;
		long long int a[200006];
		cin>>n;
		for(i=0;i<n;i++){
			cin>>a[i];
			if(i%2){
				os+=a[i];
			}
			else{
				es+=a[i];
			}
			if(os>es and i%2==1){
				maxi=max(maxi,os-es);
			}
		}
		cout<<maxi+es<<endl;
	}
	return 0;
}
