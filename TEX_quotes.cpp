#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	char s;
	ll c=0;
	while (scanf("%c",&s)==1)
	{
		if (s=='"')
		{
			if (c%2)
			{
				printf("''");
				c++;
			}
			else 
			{
				printf("``");
				c++;
			}
		}
		else
			printf("%c",s);
	}
}