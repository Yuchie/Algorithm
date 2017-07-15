#include <stdio.h>
#include <iostream>

using namespace std;

int main(void){
	int N;
	string S;
	string a = "("; //l
	string b = ")"; //r
	int l=0;
	int r=0;
	string ans = "";
	cin >> N;
	cin >> S;
	for(int i=0; i<N; i++){
		if(S[i] == '('){
			l++;
			ans = ans + '(';
		}else{
			if(l > 0){
				l--;
				ans = ans + ')';
			}else{
				ans = '('+ ans + ')';
			}
		}
	}

	while(l){
		ans += ')';
		l--;
	}
	cout << ans << endl;

	return 0;
}