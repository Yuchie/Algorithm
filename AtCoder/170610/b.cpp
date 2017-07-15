#include <stdio.h>
#include <iostream>

using namespace std;

int a[1000];

int main(void){
	int N;
	int min, max;
	cin >> N;
	for (int i=0; i<N; i++){
		cin >> a[i];
		if(i==0){
			min = a[i];
			max = a[i];
		}else{
			if(a[i]<min){
				min = a[i];
			}
			if(a[i]>max){
				max = a[i];
			}
		}
	}
	cout << max-min << endl;
	return 0;
}