#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,k;
	cin>>n>>k;
	string s;
	string final;
	cin>>s;
	ll left=0;
	ll right=0;
	string::iterator it;
	for (it=s.begin();it!=s.end();it++)
	{
		if (left==k/2&&right==k/2)
			break;
		if (*it=='('&&left<k/2)
		{
			final.push_back(*it);
			left++;
		}
		if (*it==')'&&right<k/2&&left>0)
		{
			final.push_back(*it);
			right++;
		}
	}
	cout<<final;
}