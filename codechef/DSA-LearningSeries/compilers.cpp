#include<bits/stdc++.h>

using namespace std;

int main( ){
    int t;
    cin>>t;
    while(t--){
        int ans=-1,i,n,c=0;
        string s;
        cin>>s;
        n=s.length();
        for(i=0;i<n;i++){
            if(s[i]=='<'){
                c++;
            }
            else{
                c--;
            }
            if(c==0){
                ans=i+1;
            }
            else if(c<0){
                ans=i;
                break;
            }
        }
        if(ans==-1 and c==0){
            ans=n;
        }
        else if(ans==-1){
            ans=0;
        }
        cout<<ans<<endl;
    }
}