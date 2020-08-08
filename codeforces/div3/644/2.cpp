#include<bits/stdc++.h>

using namespace std;

int main(){
int t;
cin>>t;
while(t--){
int n,a[1005],d=0,mini,i,j,k;
cin>>n;
for(i=0;i<n;i++){
cin>>a[i];
}
sort(a,a+n);
mini=a[n-1]-a[n-2];
for(i=n-2;i>0;i--){
mini=min(mini,a[i]-a[i-1]);
}
cout<<mini<<endl;
}
return 0;
}
