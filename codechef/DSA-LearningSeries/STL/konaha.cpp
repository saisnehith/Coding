#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int i,j,n,c=0,z,x;
        cin>>n>>z;
        priority_queue<int> pq;
        for(i=0;i<n;i++){
            cin>>x;
            pq.push(x);
        }
        while(z>0 and !pq.empty()){
            z-=pq.top();
            if(pq.top()/2 > 0){
                pq.push(pq.top()/2);
            }
            pq.pop();
            c++;
        }
        if(z<=0){
            cout<<c<<endl;
        }
        else{
            cout<<"Evacuate"<<endl;        
        }
    }
}