#include<bits/stdc++.h>

using namespace std;

int isprime(int n){
	if(n==0 or n==1){
		return 0;
	}
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}

int main( ){
	int t;
	cin>>t;
	while(t--){
		int n,p,k;
		cin>>n;
		p=n;
		if(n==1){
			cout<<"FastestFinger"<<endl;
			continue;
		}
		if(n==2){
			cout<<"Ashishgup"<<endl;
			continue;
		}
		if(n%2){
			cout<<"Ashishgup"<<endl;
		}
		else{
			while(p%2==0){
				p=p/2;
			}
			if(p==1){
				cout<<"FastestFinger"<<endl;
				continue;
			}
			k=isprime(n/2);
			if((n/2)%2 and k){
				cout<<"FastestFinger"<<endl;
			}
			else{
				cout<<"Ashishgup"<<endl;
			}
		}
	}
	return 0;
}
