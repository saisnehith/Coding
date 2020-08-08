#include<bits/stdc++.h>

using namespace std;

int main( ){
	int t;
	cin>>t;
	while(t--){
		int i,j,n;
		string a[55];
		cin>>n;
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		for(i=0;i<n-1;i++){
			for(j=0;j<n-1;j++){
				if(a[i][j]=='1' && a[i+1][j]=='0' and a[i][j+1]=='0'){
					cout<<"NO"<<endl;goto done;
				}
			}
		}
		cout<<"YES"<<endl;
done:
		;
	}
	return 0;
}
