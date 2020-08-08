#include<bits/stdc++.h>

using namespace std;

int main( ){
	int t;
	cin>>t;
	while(t--){
		int n,m,a,b,i,j,c=0;
		cin>>n>>m>>a>>b;
		bool arr[n][m];
		if(n*a!=m*b){
			cout<<"NO"<<endl;
			continue;
		}
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				arr[i][j]=0;
			}
		}
		for(i=0;i<n;i++){
			for(j=0;j<a;j++){
				arr[i][c]=1;
				c++;
				if(c==m){
					c=0;
				}
			}
		}
		cout<<"YES"<<endl;
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				cout<<arr[i][j];
			}
			cout<<endl;
		}
	}
	return 0;
}
