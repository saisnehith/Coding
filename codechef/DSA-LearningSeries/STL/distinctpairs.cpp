#include<bits/stdc++.h>

using namespace std;

int main( ){
    int i,j,n,m;
    cin>>n>>m;
    vector<int> A(n),B(m);
    for(i=0;i<n;i++){
        cin>>A[i];    
    }
    for(i=0;i<m;i++){
        cin>>B[i];
    }
    auto minind_A=min_element(A.begin(),A.end());
    auto maxind_B=max_element(B.begin(),B.end());
    for(i=0;i<B.size();i++){
        cout<<minind_A-A.begin()<<" "<<i<<endl;
    }
    for(i=0;i<A.size();i++){
        if(i==minind_A-A.begin()){
            continue;
        }
        cout<<i<<" "<<maxind_B-B.begin()<<endl;
    }
     return 0;
}