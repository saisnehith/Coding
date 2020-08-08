#include<bits/stdc++.h>

using namespace std;

int main( ){
	int t;
	cin>>t;
	while(t--){
		int i,j,k=0,n,a[105],c=0,d=0;
		cin>>n;
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		for(i=0;i<n;i++){
			if(a[i]%2==0){
				c++;
			}
			else{
				d++;
			}
		}
		if(c%2==0 && d%2==0){
			cout<<"YES"<<endl;
		}
		else if(c%2==1 && d%2==1){
			sort(a,a+n);
			for(i=0;i<n-1;i++){
				if(a[i+1]-a[i]==1){
					k=1;
					break;
				}
			}
			if(k==1){
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
		}
	}
	return 0;
}
