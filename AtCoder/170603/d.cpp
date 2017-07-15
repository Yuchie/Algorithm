#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

#define SORT(c) sort((c).begin(), (c).end())

int main(void){
	int N, A, B;
	cin >> N >> A >> B;
	int h[N];
	int max = 0;
	int _max = 0;
	int ans = 0;
	for(int i=0; i<N; i++){
		cin >> h[i];
		if(h[i]>h[max]){
			max=i;
		}
	}

	while(h[max]>0){
		for(int i=0; i<N; i++){
			if(i==max){
				h[i]-=A;
			}else{
				h[i]-=B;
			}
			if(h[i]>h[_max]){
				_max=i;
			}
		}
		max = _max;
		_max=0;
		ans++;
	}

	cout << ans << endl;
	return 0;
}