void solve(string ip,string op)
{
	if(ip.lrngth()==0)
	{
		cout<<op<<" ";
		return;
	}
	string op1=op;
	string op2=op;
	op1.push_back(ip[0]);
	op2.push_back(toupper(ip[0]));
	ip.erase(ip.begin()+0);
	solve(ip,op1);
	solve(ip,op2);
}
