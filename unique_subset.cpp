#include<bits/stdc++.h>
#include<vector>
#include<iostream>
using namespace std;
void solve( string ip,string op)
{
		vector<string> v;
	if(ip.length()==0)
	{
	
		v.push_back(op);
		//cout<<op<<" ";
		return;
	}
	string op1=op;
	string op2=op;
	op2.push_back(ip[0]);
	ip.erase(ip.begin()+0);
	solve(ip,op1);
	solve(ip,op2);
	set<string>s (v.begin(),v.end());
	int i=0;
	for( auto x: s)
	v[i++]=x;
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	return;
}
int main()
{
	string ip ;
	cout<<"enter ip :";
	cin>>ip;
	string op=" ";
	
	solve(ip,op);
}
