#include<bits/stdc++.h>
using namespace std;

void solve(int one,int zero,string op,int n)
{
	if(n==0)
	{
		cout<<op<<endl;
		return;
	}
		string op1=op;
		op1.push_back('1');
		solve(one+1,zero,op1,n-1);
	if(one>zero)
	{
		string op2=op;
		op2.push_back('0');
		solve(one,zero+1,op2,n-1);
	}

	return;
}
int main()
{
	int n=3;
	int one=0;
	int zero=0;
	string op=" ";
	solve(one,zero,op,n);
}
