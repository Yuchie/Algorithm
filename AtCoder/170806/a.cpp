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

int n, m;

signed main(void){
	cin >> n >> m;
	cout << (n-1)*(m-1) << endl;

	return 0;
}