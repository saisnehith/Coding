#include<bits/stdc++.h>

using namespace std;

int main( ){
	int t;
	cin>>t;
	while(t--){
		int i,j,k,c,n,m,f=0,l;
		cin>>n>>m;
		string a[20],s;
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		for(i=0;i<m;i++){
			for(j=0;j<26;j++){
				s=a[0];
				s[i]='a'+j;
				for(k=0;k<n;k++){
					c=0;
					for(l=0;l<m;l++){
						if(s[l]!=a[k][l]){
							c++;
						}
					}
					if(c>1){
						goto bad;
					}
				}
				cout<<s<<endl;
				goto done;
bad:
				;
			}
		}
		cout<<-1<<endl;
done:
		;
	}
	return 0;
}
