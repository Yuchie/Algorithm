#include <stdio.h>
#include <iostream>

using namespace std;

int a[4800];
int rate[9];

int main(void){
	int N;
	int min = 0;
	int max = 0;
	cin >> N;
	for(int i=0; i<9; i++){
		rate[i]=0;
	}
	for(int i=0; i<N; i++){
		cin >> a[i];
		if(a[i]/400 < 8){
			rate[a[i]/400]++;
		}else{
			rate[8]++;
		}
	}
	for(int i=0; i<8; i++){
		if(rate[i]!=0){
			min++;
		}
	}
	max = min+rate[8];
	if(min==0){
		min=1;
	}
	cout << min <<' ' << max << endl;

	return 0;
}