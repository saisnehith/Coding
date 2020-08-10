#include<bits/stdc++.h>

using namespace std;

int main( ){
    int n,m,i,j,val=INT_MIN;
    cin>>n>>m;
    map<string,int> mp1,mp2;
    map<string,string> mp;
    string name,country,res_name,res_country;
    for(i=0;i<n;i++){
        cin>>name>>country;
        mp[name]=country;
    }
    for(i=0;i<m;i++){
        cin>>name;
        mp2[name]++;
        mp1[mp[name]]++;
    }
    for(auto x:mp1){
        if(x.second>val){
            val=x.second;
            res_country=x.first;
        }
    }
    val=INT_MIN;
    for(auto x:mp2){
        if(x.second>val){
            val=x.second;
            res_name=x.first;
        }
    }
   cout<<res_country<<endl;
   cout<<res_name<<endl;
    return 0;
}