#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n;
	while (cin>>n)
	{
		//bitset <32> b(string("00000001000000000000000000000000"));
		bitset <32> b(n);
		//cout<<n<<endl;
		// bitset <8> b(string("10011010"));
		cout<<b<<endl;
		for (int i=0;i<8;i++)
		{
			int temp;
			temp=b[i];
			b[i]=b[i+24];
			b[i+24]=temp;
		}
		for (int i=8;i<16;i++)
		{
			int temp;
			temp=b[i];
			b[i]=b[i+8];
			b[i+8]=temp;
		}
		// for (int i=16;i<20;i++)
		// {
		// 	int temp;
		// 	temp=b[i];
		// 	b[i]=b[40-i-1];
		// 	b[40-i-1]=temp;
		// }
		// for (int i=24;i<28;i++)
		// {
		// 	int temp;
		// 	temp=b[i];
		// 	b[i]=b[56-i-1];
		// 	b[56-i-1]=temp;
		// }
		//cout<<b<<endl;
		cout<<b.to_ulong()<<endl;
	}
}