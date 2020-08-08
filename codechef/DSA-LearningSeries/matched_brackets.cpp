#include<bits/stdc++.h>

using namespace std;

int main( ){
    int i,j,c=0,n,v_max_depth=0,v_depth_ind=0,v_max_len=0,v_len_ind=0;
    cin>>n;
    vector<int> v(n),v_ind_max;
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    v_ind_max.push_back(0);
    for(i=0;i<n;i++){
        if(v[i]==1){
            c++;
        }
        else if(v[i]==2){
            c--;
        }
        if(c==0){
            v_ind_max.push_back(i+1);
        }
        if(c>v_max_depth){
            v_max_depth=c;
            v_depth_ind=i+1;
        }
    }
    for(i=1;i<v_ind_max.size();i++){
        if(v_ind_max[i]-v_ind_max[i-1]>v_max_len){
            v_max_len=v_ind_max[i]-v_ind_max[i-1];
            v_len_ind=v_ind_max[i-1]+1;
        }
    }
    cout<<v_max_depth<<" "<<v_depth_ind<<" "<<v_max_len<<" "<<v_len_ind<<endl;
    return 0;
}