#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll power(ll x, ll y) 
{ 
    if (y == 0) 
        return 1; 
    else if (y%2 == 0) 
        return power(x, y/2)*power(x, y/2); 
    else
        return x*power(x, y/2)*power(x, y/2); 
} 
ll fact[12];
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	fact[0]=1;
	fact[1]=1;
	for (ll i=1;i<=12;i++)
		fact[i]=fact[i-1]*i;
	ll f=0;
	for (ll i=0;i<s1.length();i++)
	{
		if (s1[i]=='+')
			f++;
		else
			f--;
	}
	ll f2=0;
	ll q=0;
	for (ll i=0;i<s2.length();i++)
	{
		if (s2[i]=='+')
			f2++;
		else if (s2[i]=='-')
			f2--;
		else
			q++;
	}
	ll no=abs(f-f2);
	ll j;
	for (ll i=0;i<=q;i++)
	{
		if ((2*i-q)==no)
			{
				j=i;
				break;
			}
	}
	if (no>q)
		cout<<0;
	else
	{
		ll den=power(2,q);
		ll num=fact[q]/(fact[q-j]*fact[j]);
		double ans=(double)num/den;
		printf("%0.10lf\n",ans);
	}
}