#include<bits/stdc++.h>
using namespace std;
int solve(N,K)
{
	if(N==1||K==1)
	return 0;
	int mid=pow(2,N-1)/2;
	if(k<<mid)
	return solve(N-1,k);
	else
	{
		return !solve(N-1,K-mid);
	}
}
