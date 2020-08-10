#include<bits/stdc++.h>

using namespace std;


int main( ){
    long long int i,j,k,n,x,p=1000000007,ans=1;
    cin>>n>>k;
    vector<int> v(n);
    stack<int> st;
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    for(i=0;i<n;i++){
        if(st.empty()){
            st.push(i);
            continue;
        }
        while(!st.empty() and v[i]<v[st.top()]){
            ans=((ans%p)*(i-st.top()+1)%p)%p;
            st.pop();
        }
        st.push(i);
    }
    cout<<ans<<endl;
    return 0;
}