#include<bits/stdc++.h>

using namespace std;

int main( ){
	int n,i,j,k,maxi=0,t;
	cin>>t;
	while(t--){
	    maxi=0;
	cin>>n>>k;
	vector<vector<int>> v(k);
	for(i=0;i<k;i++){
		v[i].push_back(-1);
	}
	for(i=0;i<n;i++){
		cin>>j;
		v[j-1].push_back(i);
	}
	for(i=0;i<k;i++){
		v[i].push_back(n);
	}
	for(i=0;i<k;i++){
		for(j=1;j<v[i].size();j++){
			maxi=max(maxi,v[i][j]-v[i][j-1]-1);
		}
	}
	cout<<maxi<<endl;
	for(i=0;i<k;i++){
		v[i].clear();
	}
	}
	return 0;
}