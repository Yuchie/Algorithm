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

string S;

signed main(void){
	cin >> S;
	SORT(S);

	int ans=1;
	rep(i, S.size()){
		int s = S[i]-'a'+1;
		if(ans<s){
			break;
		}else{
			ans=s+1;
		}
	}

	if(ans>26){
		cout << "None" << endl;
	}else{
		char Ans = 'a'+ans-1;
		cout << Ans << endl;
	}

	return 0;
}