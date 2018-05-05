#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <queue>

using namespace std;

#define rep(i,x) for(int i=0;i<x;i++)
#define SORT(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define int long long

int N;
vector<int> et[100000];
vector<int> ec[100000];
int q, r;
int x, y;
int dist[100000];

void dfs(int v, int p = -1, int d = 0) {
	dist[v] = d;
	rep(i, et[v].size()){
		if (et[v][i] == p) continue;
		dfs(et[v][i], v, d + ec[v][i]);
	}
}

signed main(void){
	cin >> N;
	rep(i, N-1){
		int a, b, c;
		cin >> a >> b >> c;
		a--; b--;
		et[a].pb(b);
		et[b].pb(a);
		ec[a].pb(c);
		ec[b].pb(c);
	}

	cin >> q >> r;
	r--;
	dfs(r);

	rep(i, q){
		cin >> x >> y;
		x--; y--;
		cout << dist[x]+dist[y] << endl;
	}

	return 0;
}