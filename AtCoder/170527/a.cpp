#include <iostream>
using namespace std;

const int MAX_N = 1000;
long long int dp[MAX_N];

long long int fibo(int n){
	// long long int res;
	// if(n == 1){
	// 	res = 1;
	// }else if(n==0){
	// 	res = 0;
	// }else if(table[n] != -1){
	// 	res = table[n];
	// }else{
	// 	res = fibo(n-1)+fibo(n-2);
	// }
	// return res;
	dp[0] = 1;
	dp[1] = 1;
	for(int i=0; i<n-2; i++){
		dp[i+2] = dp[i]+dp[i+1];
	}
	return dp[n-1];
}

int main(){
	memset(dp, -1, sizeof(dp));
	int N;
	cin >> N;
	cout << fibo(N) << endl;
	return 0;
}