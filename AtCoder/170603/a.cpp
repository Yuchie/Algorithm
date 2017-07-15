#include <stdio.h>
#include <iostream>

using namespace std;

int main(void){
	int A, B;
	int ans;
	cin >> A >> B;
	ans = A+B;
	if(ans>=10){
		cout << "error" << endl;
	}else{
		cout << ans << endl;
	}
	return 0;
}