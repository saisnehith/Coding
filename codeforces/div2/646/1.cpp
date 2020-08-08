#include<bits/stdc++.h>

using namespace std;

int main( ){
	int t;
	cin>>t;
	while(t--){
		int i,j,n,x,a[10005],c=0,d=0;
		cin>>n>>x;
		for(i=0;i<n;i++){
			cin>>a[i];
			if(a[i]%2==0){
				c++;
			}
			else{
				d++;
			}
		}
		if(x%2==0 and c==0){
			cout<<"No"<<endl;
		}
		else if(c==n){
			cout<<"No"<<endl;
		}
		else if(x==n and d%2==0){
			cout<<"No"<<endl;
		}
		else{
			cout<<"Yes"<<endl;
		}

	}
	return 0;
}
