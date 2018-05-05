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

int x, a, b;

signed main(void){
	cin >> x >> a >> b;
	if(abs(x-a)<abs(x-b)){
		cout << 'A' << endl;
	}else{
		cout << 'B' << endl;
	}

	return 0;
}