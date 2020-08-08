#include<bits/stdc++.h>

using namespace std;

int main( ){
    int t;
    cin>>t;
    while(t--){
        int i,j,k,n,ans;
        cin>>n;
        ans=2*n;
        int c1=0,d1=0,c2=n,d2=n;
        string s;
        cin>>s;
        for(i=1;i<=2*n;i++){
            if(c1-d1 > d2  or d1-c1>c2){
                ans=i;
                break;
            }
            if(i%2==1){
                c1+=s[i]-'0';
                c2--;
            }
            else if(i%2==0){
                d1+=s[i]-'0';
                d2--;
            }
            if(i%2==1){
                if(fabs(c)>(2*n-i+2)/2){
                    ans=i;
                    break;
                }
            } 
            else{
                if(fabs(c)>(2*n-i)/2){
                ans=i;
                break;
                }
            }           
        }
        cout<<ans<<endl;
    }
    return 0;
}