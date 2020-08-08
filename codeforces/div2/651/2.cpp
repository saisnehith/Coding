#include<bits/stdc++.h>

using namespace std;

int main( ){
	int t;
	cin>>t;
	while(t--){
		int i,j,k,n;
		cin>>n;
		vector<int> a(2*n),b(2*n),c(2*n);
		int o=0,e=0;
		for(i=0;i<2*n;i++){
			cin>>a[i];
			if(a[i]%2){
				o++;
				b[o-1]=i+1;
			}
			else{
				e++;
				c[e-1]=i+1;
			}
		}
		if(o%2 and e%2){
			for(i=0;i<o-1;i+=2){
				cout<<b[i]<<" "<<b[i+1]<<endl;
			}
			for(i=0;i<e-1;i+=2){
				cout<<c[i]<<" "<<c[i+1]<<endl;
			}
		}
		else if(o%2==0 and e%2==0){
			if(o>=2){
				for(i=0;i<o-2;i+=2){
					cout<<b[i]<<" "<<b[i+1]<<endl;
				}
				for(i=0;i<e;i+=2){
					cout<<c[i]<<" "<<c[i+1]<<endl;
				}
			}
			else{

				for(i=0;i<o;i+=2){
					cout<<b[i]<<" "<<b[i+1]<<endl;
				}
				for(i=0;i<e-2;i+=2){
					cout<<c[i]<<" "<<c[i+1]<<endl;
				}
			}
		}
	}
	return 0;
}


