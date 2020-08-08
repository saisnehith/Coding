#include<bits/stdc++.h>

using namespace std;

int main(){
    int i,j,k,ans=INT_MIN,y_min=INT_MAX,n;
    cin>>n;
    vector<pair<int,int>> points(n+2);
    points[0].first=0;
    points[0].second=0;
    points[n+1].first=100000;
    points[n+1].second=0;
    for(i=1;i<=n;i++){
        cin>>points[i].first>>points[i].second;
    }
    sort(points.begin(),points.end());
    for(i=1;i<=500;i++){
        j=0;k=1;
        while(k<=n+1){
            if(points[k].second>=i){
                k++;
                continue;
            }
            else{
                ans=max(ans,(points[k].first-points[j].first)*i);
                j=k;
                k++;
            } 
        }
    }
    cout<<ans<<endl;
    return 0;

}