#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

#define SORT(c) sort((c).begin(), (c).end())

int main(void){
	string S;
	cin >> S;
	SORT(S);
	string out = "yes";
	for(int i=0; i<S.size()-1; i++){
		if(S[i]==S[i+1]){
			out = "no";
			break;
		}
	}
	cout << out << endl;
	return 0;
}