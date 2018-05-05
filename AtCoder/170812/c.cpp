#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <queue>

using namespace std;
typedef long long ll;

#define rep(i,x) for(int i=0;i<x;i++)
#define SORT(x) sort(x.begin(),x.end())

int main(void){
	int N;
	ll x=1;
	cin >> N;
	rep(i, N){
		ll a;
		cin >> a;
		ll b = __gcd(x, a);
		x = (x/b)*a;
	}

	cout << x << endl;

	return 0;
}