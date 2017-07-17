#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void){
	int N, K;
	int ans=0;
	cin >> N >> K;
	int l[N];
	for(int i=0; i<N; i++){
		cin >> l[i];
	}
	sort(l, l+N);
	for(int i=0; i<K; i++){
		ans += l[N-i-1];
	}
	cout << ans << endl;
	return 0;
}