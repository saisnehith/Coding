#include<bits/stdc++.h>

using namespace std;

typedef struct data{
	data *child[26];
	int cnt=0;
}trie;

int n,k;
string s[100000];
long long int ans=0;

trie *root;

void dfs(trie *root,int lvl){
	trie *cur=root;
	for(int i=0;i<26;i++){
		if(cur->child[i]){
			dfs(cur->child[i],lvl+1);
			cur->cnt+=cur->child[i]->cnt;
		}
	}
	while(cur->cnt>=k){
		cur->cnt-=k;
		ans+=lvl;
	}
}

void insert(string &s){
	trie *cur=root;
	for(int i=0;i<s.length();i++){
		char ch=s[i];
		int reqd=s[i]-'A';
		if(!cur->child[reqd]){
			cur->child[reqd]=new trie();
		}
		cur=cur->child[reqd];
	}
	cur->cnt++;
}

void solve(){
	root=new trie();
	ans=0;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>s[i];
		insert(s[i]);
	}
	dfs(root,0);
	cout<<ans<<endl;
}

int main( ){
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		cout<<"Case #"<<i<<": ";
		solve();
	}
	return 0;
}
