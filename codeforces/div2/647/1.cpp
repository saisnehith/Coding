#include<bits/stdc++.h>

using namespace std;

int main( ){
	int t;
	cin>>t;
	while(t--){
		long long int a,b,c=0,i,j,f=0;
		cin>>a>>b;
		if(b<a){
			while(a!=b){
				f=0;
				if(a/8>=b and a%8==0){
					a=a/8;
					f=1;
					c++;
				}
				else if(a/4>=b and a%4==0){
					a=a/4;
					f=1;
					c++;
				}
				else if(a/2>=b and a%2==0){
					a=a/2;
					f=1;
					c++;
				}
				if(f==0){
					break;
				}
			}
		}
		else if(b>a){
			while(a!=b){
				f=0;
				if(b>=a*8){
					a=a*8;
					f=1;
					c++;
				}
				else if(b>=a*4){
					a=a*4;
					f=1;
					c++;
				}
				else if(b>=a*2){
					a=a*2;
					f=1;
					c++;
				}
				if(f==0){
					break;
				}
			}
		}
		if(a!=b){
			cout<<-1<<endl;
		}
		else{
			cout<<c<<endl;
		}
	}
	return 0;
}
