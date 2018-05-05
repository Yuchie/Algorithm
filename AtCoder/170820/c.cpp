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
vector<int> A;

signed main(void){
	cin >> N;
	rep(i, N){
		int a;
		cin >> a;
		A.pb(a);
	}

	SORT(A);
	vector<int> ans;
	int pre=0;
	int max1=0;
	int max2=0;
	rep(i,N){
		if(pre==A.back()){
			ans.pb(pre);
			pre=0;
		}else{
			pre=A.back();
		}
		if(ans.size()>=2){
			max1=ans.back();
			ans.pop_back();
			max2=ans.back();
			break;
		}
		A.pop_back();
	}

	cout << max1*max2 << endl;

	return 0;
}