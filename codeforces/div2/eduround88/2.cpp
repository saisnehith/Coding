#include<bits/stdc++.h>

using namespace std;

int main( ){
	int t;
	cin>>t;
	while(t--){
		char a[105][1005];
		long long int i,j,k,x,y,n,m,ans=0;
		cin>>n>>m>>x>>y;
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				cin>>a[i][j];
			}
		}
for(i=0;i<n;i++){
a[i][m]='\0';
}
		for(i=0;i<n;i++){
			for(j=0;j<m;){
				if(a[i][j]=='.' and a[i][j+1]=='.'){
					ans+=min(2*x,y);
					j+=2;
				}
				else if(a[i][j]=='.'){
					ans+=x;
					j++;
				}
				else{
					j++;
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
