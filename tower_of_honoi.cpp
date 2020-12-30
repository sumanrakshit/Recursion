#include<bits/stdc++.h>
using namespace std;
void solve( int s,int d,int h,int n)
{
	if(n==1)
	{
		cout<<"moving "<< n << "plate to "<<s <<"to"<< d<<endl;
		return;
	}
	solve(s,h,d,n-1);
	cout<<"moving"<< n << " plate" << "from "<<s<<" to"<< h<<endl;
	solve(h,d,s,n-1);
	//	cout<<"moving plate"<< n<< "from "<<h<<" to"<< d<<endl;
	return;
}
int main()
{
	int n=4;
	
	int s=1,h=2,d=3;
	solve(s,d,h,n);
	
}
