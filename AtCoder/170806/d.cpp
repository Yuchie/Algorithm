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
	int H, W;
	cin >> H >> W;
	int N;
	cin >> N;
	int a[N];
	int c[H][W];
	int h=0, w=0;
	int flag = 1;
	for(int i=0; i<N; i++){
		cin >> a[i];
		for(int j=0; j<a[i]; j++){
			c[h][w]=i+1;
			w += flag;
			if(flag==1&&w==W){
				w=W-1;
				flag=-1;
				h++;
			}else if(flag==-1&&w==-1){
				w=0;
				flag=1;
				h++;
			}
		}
	}
	for(int i=0; i<H; i++){
		for(int j=0; j<W; j++){
			cout << c[i][j];
		}
		cout << endl;
	}

	return 0;
}