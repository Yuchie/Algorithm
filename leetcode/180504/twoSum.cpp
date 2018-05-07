/* the answer for the #1 Two Sum*/

#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <queue>

using namespace std;

#define rep(i,x) for(int i=0;i<x;i++)
#define SORT(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define int long long

class Solution {
public:
	//find the pairs which adds up to target value in nums
	//there's only one colution for this
	vector<int> twoSum(vector<int>& nums, int target){
		int length = nums.size();
		//check the combination for each num
		for(int i=0; i<length; i++) {
			for(int j=i+1; j<length; j++) {
				if(nums[i]+nums[j] == target){
					vector<int> ans;
					ans.push_back(i);
					ans.push_back(j);
					return ans;
				}
			}
		}
	}
};