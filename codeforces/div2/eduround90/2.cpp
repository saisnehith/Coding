#include<bits/stdc++.h>

using namespace std;

int main( ){
	int t;
	cin>>t;
	while(t--){
		int i,j,k,e=0,o=0,l;
		string s,ans;
		cin>>s;
		l=s.length();
		for(i=0;i<l;i++){
			if(s[i]=='1'){
				o++;
			}
			else if(s[i]=='0'){
				e++;
			}
		}
		if(o==l or e==l){
			ans="NET";
		}
		else{
			j=min(o,e);
			if(j%2){
				ans="DA";
			}
			else{
				ans="NET";
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
