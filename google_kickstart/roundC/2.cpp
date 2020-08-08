#include<bits/stdc++.h>

using namespace std;

const int maxN=30;
int n,m;
string s[maxN],ans;
vector<int> adj[26];
bool vis[26],act[26],bad;

void dfs(int u){
	vis[u]=1;
	act[u]=1;
	for(int v:adj[u]){
		if(act[v] and v^u){
			bad=1;
		}
		else if(!vis[v]){
			dfs(v);
		}
	}
	act[u]=0;
	ans+=(char)(u+'A');
}

void solve(){
	int i,j;
	set<char> t;
	cin>>n>>m;
	for(i=0;i<n;i++){
		cin>>s[i];
		for(char c:s[i]){
			t.insert(c);
		}
		if(i){
			for(j=0;j<m;j++){
				adj[s[i-1][j]-'A'].push_back(s[i][j]-'A');
			}
		}
	}
	memset(vis,0,26);
	memset(act,0,26);
	ans="";
	bad=0;
	for(char c:t){
		if(!vis[c-'A']){
			dfs(c-'A');
		}
	}
	if(bad){
		ans="-1";
	}
	cout<<ans<<endl;
	for(i=0;i<26;i++){
		adj[i].clear();
	}
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
