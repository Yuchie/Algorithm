#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <queue>

using namespace std;

int main(void){
	int N, K;
	cin >> N >> K;
	vector<int> A;
	vector<int> B;
	int ans=2; //2:impossible 1:possible 0:don't know
	for(int i=0; i<N; i++){
		int a;
		cin >> a;
		A.push_back(a);
		if(A[i]==K){
			ans=1;
		}else if(A[i]>K){
			B.push_back(A[i]-K);
			ans=0;
		}
	}

	int m_odd=0;
	int m_even=0;
	while(!ans){
		sort(A.begin(), A.end());
		for(int i=0; i<N; i++){
			if(i!=0){
				int dif = A[i]-A[i-1];
				if(dif<A[0]){
					A.push_back(dif);
				}
			}
		}
	}
	if(ans==1){
		cout << "POSSIBLE" << endl;
	}else{
		cout << "IMPOSSIBLE" << endl;
	}
	return 0;
}
