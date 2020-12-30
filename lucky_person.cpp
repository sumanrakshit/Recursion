#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>v,int index,int& ans)
{
	if(v.size()==1)
	{
	ans=v[0];
	return ans;
		
	}
	index=(index+1)%v.size();
	v.erase(v.begin()+index);
	solve(v,index,ans);
	return ans;
}
int main()
{
	int n=100;
	//int k=2;
	vector<int>v;
	for(int i=1;i<=n;i++)
	{
		v.push_back(i);
	}
	int ans=-1;
	//k=k-1;
	int index=0;
cout<<	"this person be saved in the battle "<< solve(v,index,ans);
}
