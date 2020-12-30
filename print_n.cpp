#include<bits/stdc++.h>
using namespace std;
int print_n( int n)
{
	if(n==0)
	return 1;
 print_n(n-1);
		cout<< n<<" ";
}
int main()
{
	int n=10;
	print_n(n);
}
