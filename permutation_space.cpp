void solve(string ip,string op)
{
	if(ip.length()==0)
	{
		cout<<op<<" ";
	}
	string op1=op;
	string op2=op;
	op1.push_back('-');
	op1.push_back(ip[0]);
	op2.push_back(ip[0]);
	ip.erase(ip.begin()+0);
	solve(ip,op1);
	solve(ip,op2);
	retuen;
	
}
int main()
{
	string ip;
	cin>>ip;
	string op=" ";
	op.push_back(ip[0]);
	solve(ip,op);//A_B_c
}
