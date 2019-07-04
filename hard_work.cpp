#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	string a,b,c;
	cin>>a>>b>>c;
	string af,bf,cf;
	string::iterator it;
	for (it=a.begin();it!=a.end();it++)
	{
		if ((int)*it>=65&&(int)*(it)<=90)
		{
			*it+=32;
		}
		if (*it!='-'&&*it!=';'&&*it!='_')
			af.push_back(*it);
	}
	for (it=b.begin();it!=b.end();it++)
	{
		if ((int)*it>=65&&(int)*(it)<=90)
		{
			*it+=32;
		}
		if (*it!='-'&&*it!=';'&&*it!='_')
			bf.push_back(*it);
	}

	for (it=c.begin();it!=c.end();it++)
	{
		if ((int)*it>=65&&(int)*(it)<=90)
		{
			*it+=32;
		}
		if (*it!='-'&&*it!=';'&&*it!='_')
			cf.push_back(*it);
	}
	int n;
	cin>>n;
	//cout<<af<<" "<<bf<<" "<<cf<<endl;
	for (int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		string sf;
		for (it=s.begin();it!=s.end();it++)
		{
		if ((int)*it>=65&&(int)*(it)<=90)
		{
			*it+=32;
		}
		if (*it!='-'&&*it!=';'&&*it!='_')
			sf.push_back(*it);
		}	
		string s1,s2,s3,s4,s5,s6;
		s1.append(af);
		s1.append(bf);
		s1.append(cf);
		s2.append(af);
		s2.append(cf);
		s2.append(bf);
		s3.append(bf);
		s3.append(af);
		s3.append(cf);
		s4.append(cf);
		s4.append(af);
		s4.append(bf);
		s5.append(cf);
		s5.append(bf);
		s5.append(af);
		s6.append(bf);
		s6.append(cf);
		s6.append(af);
		if (sf.compare(s1)==0||sf.compare(s2)==0||sf.compare(s3)==0||sf.compare(s4)==0||sf.compare(s5)==0||sf.compare(s6)==0)
			cout<<"ACC"<<endl;
		else
			cout<<"WA"<<endl;
	}
}