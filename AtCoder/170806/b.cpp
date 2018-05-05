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

string s;
string ans = "";

signed main(void){
	cin >> s;
	ans += s[0];
	ans += to_string(s.size()-2);
	ans += s[s.size()-1];
	cout << ans << endl;

	return 0;
}