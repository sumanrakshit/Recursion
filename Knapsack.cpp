#include<bits/stdc++.h>
using namespace std;
int Knapsack(int val[],int wt[],int w,int n)
{
	if(n==0||w==0)
	return 0;
	if(wt[n-1]<=w)
	return max(val[n-1]+Knapsack(val,wt,w-wt[n-1],n-1),Knapsack(val,wt,w,n-1));
	else
	return Knapsack(val,wt,w,n-1);
}
int main()
{
	int val[]={60,100,120};
	int wt[]={10,20,30};
	int w=50;
	int  n=sizeof(val)/sizeof(val[0]);
	
	cout<<Knapsack(val,wt,w,n)<<endl;
}
