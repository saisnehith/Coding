#include<bits/stdc++.h>

using namespace std;

int main( ){
	int t;
	cin>>t;
	while(t--){
		long long int n,m,i,j,k,rank,v;
		vector<long long int> a;
		cin>>n>>m;
		string s;
		for(i=0;i<n;i++){
			cin>>s;
			v=0;
			for(char c:s){
				v=2*v+c-'0';
			}
			a.push_back(v);
		}
		sort(a.begin(),a.end());
		k=(1ll<<m)-n;
		rank=(k-1)/2;
		for(long long int p:a){
			if(p<=rank){
				rank++;
			}
		}
		string ans;
		for(;m--;rank>>=1){
			ans.push_back((rank & 1)+'0');
		}
		reverse(ans.begin(),ans.end());
		cout<<ans<<endl;
	}
	return 0;
}

