#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

#define SORT(c) sort((c).begin(), (c).end())

int main(void){
	int N;
	cin >> N;
	int s[N];
	int ans = 0;
	for(int i=0; i<N; i++){
		cin >> s[i];
		ans += s[i];
	}
	sort(s, s+N);

	if(ans%10==0){
		for(int i=0; i<N; i++){
			if(s[i]%10!=0){
				ans-=s[i];
				break;
			}else{
				if(i==N-1){
					ans=0;
				}
			}
		}
	}

	cout << ans << endl;
	return 0;
}