std::vector<string> valid;
void generate(string &s,int open,int close)
{
	if(open==0 and close==0)
	{
		valid.pb(s);
		return;
	}
	if(open>0)
	{
		s.pb('(');
		generate(s,open-1,close);
		s.pop_back();

	}
	if(close>0)
	{
		if(open<close)
		{
			s.pb(')');
			generate(s,open,close-1);
			s.pop_back();
		}
	}
}
