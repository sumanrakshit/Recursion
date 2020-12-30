#include<bits/stdc++.h>
#include<string>
using namespace std;
int Lcs(char x[],char y[],int n, int m)
{
	if(n==0 || m==0)
	return 0;
	if(x[n-1]==y[n-1])
	return 1+Lcs(x,y,n-1,m-1);
	else
	return max(Lcs(x,y,n-1,m),Lcs(x,y,n,m-1));
}
int main()
{
	char x[]="abcdgh";
	char y[]="abedfha";
	int n=strlen(x);
	int m=strlen(y);
	cout<<"Longest common subsequence:"<<Lcs(x,y,n,m)<<endl;
	return 0;
}
