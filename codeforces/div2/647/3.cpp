//O(n * maxA) solution

#include <bits/stdc++.h>

using namespace std;

const int N = 1025;

int n;
int in[N];
bool is[N];

bool check(int k){
	for(int i = 1; i <= n; ++i)
		if(!is[in[i] ^ k])
			return false;
	return true;
}

void solve(){
	for(int i = 0; i < N; ++i)
		is[i] = false;
	
	scanf("%d", &n);
	for(int i = 1; i <= n; ++i){
		scanf("%d", &in[i]);
		is[in[i]] = true;
	}
	
	for(int k = 1; k < 1024; ++k)
		if(check(k)){
			printf("%d\n", k);
			return;
		}
	
	puts("-1");
}

int main(){
	int cases;
	scanf("%d", &cases);
	
	while(cases--)
		solve();
	return 0;
}
