#include<bits/stdc++.h>
using namespace std;
int print_n( int n)
{
  if(n==1)
	{
		cout<<n<<" ";
		//return 1;
	}
   cout<< n<<" ";
   print_n(n-1);
		
}
int main()
{
	int n=10;
	print_n(n);
}
