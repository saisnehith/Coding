#include<bits/stdc++.h>

using namespace std;

int main( ){
	int t;
	cin>>t;
	while(t--){
		long long int h,c,t,i,ans=0,p;
long double diff,temp,j;
		cin>>h>>c>>t;
		long long int low,high,mid;
		cout<<t<<endl;
		high=pow(10,18);
		low=0;
		diff=pow(10,18);
		j=0;
temp=t*1.0;
		if(t==(h+c)/2){
			p=2;
		}
		else{
			while(fabs(j-temp)<=fabs(diff-temp)){
				if(ans!=0){
					diff=j;
				}
				p=mid;
				mid=low+(high-low)/2;
				if(mid%2==0){
					mid=mid+1;
				}
				cout<<"low,mid,high is  "<<low<<" "<<mid<<" "<<high<<endl;
				j=((((mid/2)+1)*h*1.0+(mid/2)*c*1.0)/mid)*1.0;
				cout<<"j,t is "<<j<<" "<<t<<endl;
				cout<<"diff,t is "<<diff<<" "<<t<<endl;
				if(j-temp<0){
					high=mid;
				}
				else{
					low=mid+1;
				}
				ans++;
			}
		}
		cout<<p<<endl;
	}
	return 0;
}
