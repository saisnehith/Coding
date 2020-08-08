#include<bits/stdc++.h>

using namespace std;

int main( ){
	int t;
	cin>>t;
	while(t--){
		int n,i,j,k,c=0,d=0,p;
		string s,s1,s2;
		cin>>n;
		cin>>s;
		while(s[c]=='0' and c<n){
			s1+=s[c];
			c++;
		}
		i=n-1;
		while(s[i]=='1' and i>=0){
			s2+=s[i];
			d++;
			i--;
		}
		if(c+d==n){
			cout<<s1+s2<<endl;
		}
		else{
			cout<<s1+'0'+s2<<endl;
		}

	}
	return 0;
}

