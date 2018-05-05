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
	int N;
	cin >> N;
	int a[N];
	int ans2 = 0;
	int ans4 = 0;
	for(int i=0; i<N; i++){
		cin >> a[i];
		if(a[i]%4==0){
			ans4++;
		}else if(a[i]%2==0){
			ans2++;
		}
	}
	if((max(0, ans2-1)+(ans4*2))>=N-1){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}

	return 0;
}