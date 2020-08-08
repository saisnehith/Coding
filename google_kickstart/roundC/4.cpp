#include<bits/stdc++.h>


using namespace std;

const int maxN=2e5;

int n,q;
long long int a[maxN];

struct fq{
	long long int a[maxN+1];
	void upd(int i,long long int  x){
		for(i++;i<=n;i+=i&-i){
			a[i]+=x;
		}
	}
	long long int qry(int i){
		long long int s=0; 
		for(;i>0;i-=i&-i){
			s+=a[i];
		}
		return s;
	}
}f0[2],f1[2];


void app(int i,long long int x){
	f0[i&1].upd(i,x-a[i]);
	f1[i&1].upd(i,i*(x-a[i]));
	f0[i&1^1].upd(i,-(x-a[i]));
	f1[i&1^1].upd(i,-i*(x-a[i]));
	a[i]=x;
}

void solve(){
	cin>>n>>q;
	for(int i=0;i<n;i++){
		long long int z;
		cin>>z;
		app(i,z);
	}
	long long int ans=0;
	while(q--){
		char qt;
		cin>>qt;
		if(qt=='Q'){
			int l,r;
			cin>>l>>r,l--,r--;
			long long int s;
			s=f1[l&1].qry(r+1)-f1[l&1].qry(l)-(l-1)*(f0[l&1].qry(r+1)-f0[l&1].qry(l));
			ans+=s;
		}
		else{
			int i,x;
			cin>>i>>x,i--;
			app(i,x);
		}
	}
	cout<<ans<<endl;
	for(int i=0;i<n;i++){
		app(i,0);
	}

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
