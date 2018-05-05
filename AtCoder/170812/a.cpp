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
	int N;
	cin >> N;
	int a = N/100;
	int b = (N-a*100)/10;
	int c = N-a*100-b*10;
	if(N==c*100+b*10+a){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}

	return 0;
}