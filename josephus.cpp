#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>v,int k,int index,int& ans)
{
	if(v.size()==1)
	{
	ans=v[0];
	return ans;
		
	}
	index=(index+k)%v.size();
	v.erase(v.begin()+index);
	solve(v,k,index,ans);
	return ans;
}
int main()
{
	int n=7;
	int k=3;
	vector<int>v;
	for(int i=1;i<=n;i++)
	{
		v.push_back(i);
	}
	int ans=-1;
	k=k-1;
	int index=0;
cout<<	solve(v,k,index,ans);
}
