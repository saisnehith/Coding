#include<bits/stdc++.h>

using namespace std;

int main( ){
    int t;
    cin>>t;
    while(t--){
        int i,j,k,ans=INT_MIN,n;
        cin>>n;
        vector<int> s(n),p(n),v(n);
        for(i=0;i<n;i++){
            cin>>s[i]>>p[i]>>v[i];
            ans=max(ans,(p[i]/(s[i]+1))*v[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}