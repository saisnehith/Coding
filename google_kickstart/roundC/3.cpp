#include<bits/stdc++.h>

using namespace std;

const int maxN=1e5;

int s1,s2,c[2*100*maxN+1],a[maxN];

void solve(){
	int i,j,n;
	s1=0,s2=0;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
		if(a[i]<0){
			s1-=a[i];
		}
		else{
			s2+=a[i];
		}
	}
	memset(c,0,2*1e7+1);
	c[s1]++;
	int p=0,ans=0;
	for(i=0;i<n;i++){
		p+=a[i];
		for(j=0;j*j<=s2;j++){
			if(s1+p-j*j>=0){
				ans+=c[s1+p-j*j];
			}
		}
		c[s1+p]++;
	}
	cout<<ans<<endl;
}

int main( ){
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		cout<<"Case #"<<i<<": ";
		solve();
	}
	return 0;
}
