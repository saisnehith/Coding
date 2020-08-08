#include<bits/stdc++.h>

using namespace std;

int main( ){
int t;
cin>>t;
while(t--){
int a,b,c,maxi,max1,min1;
cin>>a>>b;
if(a>b){
maxi=max(a,2*b);
}
else if(a<=b){
maxi=max(b,2*a);
}
cout<<maxi*maxi<<endl;
}
return 0;
}
