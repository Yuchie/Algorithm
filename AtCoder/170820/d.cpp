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
string s1, s2;

signed main(void){
	cin >> N;
	cin >> s1;
	cin >> s2;

	int pre = 0;
	float ans = 3;

	rep(i,N){
		if(s1[i]!=s2[i]){
			if(pre==1){
				ans*=2;
			}else if(pre==2){
				ans*=3;
			}
			if(i==0){
				ans*=2;
			}
			i++;
			pre=2;
		}else{
			if(pre==1){
				ans*=2;
			}else if(pre==2){
				ans*=1;
			}
			pre=1;
		}
	}

	cout << (int)ans%1000000007 << endl;

	return 0;
}