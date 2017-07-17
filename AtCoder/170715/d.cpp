#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <queue>

using namespace std;

/* field_t
		point connected to
*/
typedef vector<vector<int> > field_t;
/* dis_t
		distance
*/
typedef vector<int> dist_t;

void cal(const field_t field, int* dist, int start){
	queue<int> q;
	q.push(start);

	while(!q.empty()){
		int cur = q.front(); q.pop();
		if(dist[cur-1]!=-1){
			vector<int> next = field[cur-1];
			while(!next.empty()){
				int next_t = next[0]; next.erase(next.begin());
				if(dist[next_t-1]==-1){
					dist[next_t-1]=dist[cur-1]+1;
					q.push(next_t);
				}else{
					dist[next_t-1]=min(dist[cur-1]+1, dist[next_t-1]);
				}
			}
		}
	}
}

int main(void){
	int N;
	cin >> N;

	// init
	field_t field(N);
	dist_t dist_1(N, -1), dist_N(N, -1);

	//create field
	for(int i=0; i<N-1; i++){
		int a, b;
		cin >> a >> b;
		field[a-1].push_back(b);
		field[b-1].push_back(a);
	}
	dist_1[0]=0;
	dist_N[N-1]=0;

	cal(field, &dist_1.front(), 1);
	cal(field, &dist_N.front(), N);

	//compare
	int black = 0;
	int white = 0;
	for(int i=0; i<N; i++){
		if(dist_1[i] <= dist_N[i]){
			black ++;
		}else{
			white ++;
		}
	}
	if(black>white){
		cout << "Fennec" << endl;
	}else{
		cout << "Snuke" << endl;
	}
	return 0;
}