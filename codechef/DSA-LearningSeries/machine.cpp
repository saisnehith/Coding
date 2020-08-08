#include<bits/stdc++.h>

using namespace std;

int main( ){
    int t;
    cin>>t;
    while(t--){
        long long int i,j,k,n,mini=INT_MAX,ans=0;
        cin>>n;
        vector<long long int> s(n),s_min(n+1);
        s_min[n]=0;
        for(i=0;i<n;i++){
            cin>>s[i];
            mini=min(mini,s[i]);
            s_min[i]=mini;
        }
        for(i=n-1;i>=0;i--){
            ans+=(s_min[i]-s_min[i+1])*(i+1);
        }
        cout<<ans<<endl;
    }
    return 0;

}
