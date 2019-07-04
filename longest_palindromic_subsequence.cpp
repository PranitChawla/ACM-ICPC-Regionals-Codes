#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int lps (int key,int end, string s)
{
	if (key>end)
		return 0;
	else if (key==end)
		return 1;
	else 
	{
		if (s[key]==s[end])
			return (2+lps(key+1,end-1,s));
		else
			return max(lps(key+1,end,s),lps(key,end-1,s));
	}
}
int main()
{
	string s;
	cin>>s;
	cout<<lps(0,s.length()-1,s);
}