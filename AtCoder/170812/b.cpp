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
	int A, B, C, D;
	cin >> A >> B >> C >> D;
	int T[100];
	for(int i=0; i<100; i++){
		T[i]=0;
	}
	for(int i=A; i<B; i++){
		T[i]++;
	}
	for(int i=C; i<D; i++){
		T[i]++;
	}
	int t=0;
	for(int i=0; i<100; i++){
		if(T[i]==2){
			t++;
		}	
	}

	cout << t << endl;

	return 0;
}