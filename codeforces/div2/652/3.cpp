#include<bits/stdc++.h>

using namespace std;

int main( ){
	int t;
	cin>>t;
	while(t--){
		long long int n,k,i,j,s=0;
		cin>>n>>k;
		vector<int> a(n),w(k);
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		for(i=0;i<k;i++){
			cin>>w[i];
		}
		sort(a.begin(),a.end(),greater<int>());
		sort(w.begin(),w.end());
		for(i=0;i<k;i++){
			s+=a[i];
			w[i]--;
			if(w[i]==0){
				s+=a[i];
			}
		}
//		cout<<"s is "<<s<<endl;
		sort(a.begin(),a.end());
		j=0;
		for(i=k-1;i>=0;i--){
			if(w[i]==0){
				continue;
			}
			s+=a[j];
			j+=w[i];
//			cout<<"s is "<<s<<endl;
		}
		cout<<s<<endl;
	}
	return 0;
}
