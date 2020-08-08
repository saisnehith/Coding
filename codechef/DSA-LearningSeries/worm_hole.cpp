#include <bits/stdc++.h>

using namespace std;

int main() {
    int i,j,k,n,x,y,s,e,ans;
    cin>>n>>x>>y;
    vector<pair<int,int>> contests(n);
    vector<int> V(x),W(y);
    for(i=0;i<n;i++){
        cin>>contests[i].first>>contests[i].second;
    }
    for(i=0;i<x;i++){
        cin>>V[i];
    }
    for(i=0;i<y;i++){
        cin>>W[i];
    }
    sort(V.begin(),V.end());
    sort(W.begin(),W.end());
    ans=INT_MAX;
    for(i=0;i<n;i++){
        auto low=lower_bound(V.begin(),V.end(),contests[i].first);
        auto up=lower_bound(W.begin(),W.end(),contests[i].second);
        if(low==V.end()){
            low--;
        }
        else if(*low>contests[i].first){
            if(low==V.begin()){
                continue;
            }
            low--;
        }
        if(up==W.end()){
        	continue;
        }
        ans=min(ans,W[up-W.begin()]-V[low-V.begin()]+1);
    }
cout<<ans<<endl;

    return 0;
}