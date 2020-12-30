#include<bits/stdc++.h>
using namespace std;
void solve(int open,int close,string op)
{
	
	if(open==0 && close==0)
	{
	//v.push_back(op);
	cout<<op<<endl;
		
		return ;
	}
	
	if(open!=0)
	{
		string op1=op;
		op1.push_back('(');
		solve(open-1,close,op1);
	}
	 if(close>open)
	{
		string op2=op;
		op2.push_back(')');
		solve(open,close-1,op2);
	}
	return;
}
string parnt(int n)
{
	int close=n;
	int open=n;
	string op=" ";
	vector<string> v;
 	solve(open,close,op);
  	
	
	}
int main()
{
	int n=3;
	//vector<string> v;
    parnt(n);
     
    
}

