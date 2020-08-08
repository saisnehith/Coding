#include<bits/stdc++.h>

using namespace std;

int isvalid(vector<long long int> &v,long long int k){
	long long int i,res=1;
	for(i=1;i<=10;i++){
		res*=v[i];
		if(res>=k){
			return 1;
		}
	}
	return 0;
}

int main( ){
	long long int i,j,k,n;
	cin>>k;
	string s="codeforces";
	vector<long long int> v(11,1);
	i=0;
	if(k==1){
		cout<<s<<endl;
		return 0;
	}
	i=0;
	while(1){
		i++;
		if(i>10){
			i=1;
		}
		v[i]++;
		if(isvalid(v,k)){
			break;
		}
	}
	for(i=1;i<=10;i++){
		while(v[i]>0){
			cout<<s[i-1];
			v[i]--;
		}
	}
	cout<<endl;
	return 0;
}

