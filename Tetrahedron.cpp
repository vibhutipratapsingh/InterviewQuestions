#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
const int mod = 1000000007;
const int N = 1e7+2, M = N;

int dp[2][N];
int vis[2][N];
int go(int same, int steps){
	if(steps == 1){
		if(same) return 0;
		return 1;
	}
	int &ans = dp[same][steps];
	if(vis[same][steps])
		return ans;
	vis[same][steps] = 1;
	if(same == 1)
		return ans = (3LL*go(1-same, steps-1))%mod;
	else
		return ans = (2LL*go(0, steps-1) + go(1, steps-1))%mod;
}
int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int i,n,k,j;
	cin >> n;
	dp[1][0] = 1;
	for(int steps = 1; steps < N; steps++){
		dp[1][steps] = (3*dp[0][steps-1]);
		dp[0][steps] = (2*dp[0][steps-1] + dp[1][steps-1]);
	}
	cout << dp[1][n] << endl;
	

	return 0;
} 
