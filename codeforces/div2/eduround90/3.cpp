#include<bits/stdc++.h>

using namespace std;

long long int a[1000005]={INT_MAX};
int main( ){
	int t;
	cin>>t;
	while(t--){
		long long int i,j,k,c=0,n,ind,mini=0,ans=0;
		string s;
		cin>>s;
		n=s.length();
		for(i=0;i<1000005;i++){
			a[i]=INT_MAX;
		}
		for(i=0;i<n;i++){
			if(s[i]=='+'){
				c++;
			}
			else if(s[i]=='-'){
				c--;
			}
			if(c<0){
				a[abs(c)]=min(a[abs(c)],i+1);
			}
			mini=min(c,mini);
			//			cout<<"mini is "<<mini<<endl;
		}
		for(i=0;i<abs(mini);i++){
			ans+=a[i+1];
			//			cout<<i<<" "<<a[i+1]<<endl;
		}
		ans+=n;
		if(mini==0){
			cout<<n<<endl;
		}
		else{
			cout<<ans<<endl;
		}
	}
	return 0;
}
