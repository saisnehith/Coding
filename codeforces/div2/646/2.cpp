#include<bits/stdc++.h>

using namespace std;

int main( ){
	int t;
	cin>>t;
	while(t--){
		int i,j,n,c=0,d=0,f0=-1,f1=-1,l0=-1,l1=-1,ans=0;
		string s;
		cin>>s;
		n=s.length();
		for(i=0;i<s.length();i++){
			if(s[i]=='0'){
				c++;
			}
			else if(s[i]=='1'){
				d++;
			}
		}
		for(i=0;i<s.length();i++){
			if(s[i]=='0' and f0==-1){
				f0=i;
			}
			if(s[i]=='1' and f1==-1){
				f1=i;
			}
		}
		for(i=n-1;i>=0;i--){
			if(s[i]=='0' and l0==-1){
				l0=i;
			}
			if(s[i]=='1' and l1==-1){
				l1=i;
			}
		}
		if(f0<f1 and l0<l1 and f1<l0){
			ans=min(c-f1+f0,d-l1+l0);
		}
		else if(f0<f1 and l1<l0 and f1<=l1){
			ans=min(d,l0-f1-d+1);
			ans=min(ans,l1-f0-d+1);
		}
		else if(f1<f0 and l0<l1 and f0<=l0){
			ans=min(c,l1-f0-c+1);
			ans=min(ans,l0-f1-c+1);
		}
		else if(f1<f0 and l1<l0 and f0<l1){
			ans=min(d-f0+f1,c-l0+l1);
		}
		cout<<ans<<endl;
	}
	return 0;
}
