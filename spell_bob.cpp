#include <bits/stdc++.h>
using namespace std;
bool check_b_o (char a)
{
	if (a=='b'||a=='o')
		return true;
	return false;
}
int main()
{
	int T;
	cin>>T;
	while (T--)
	{
		string top,bottom;
		cin>>top>>bottom;
		int check[3];
		for (int i=0;i<3;i++)
			check[i]=0;
		int count_b=0;
		int count_o=0;
		int k=0;
		int res1=check_b_o(top[0])||check_b_o(bottom[0]);
		int res2=check_b_o(top[1])||check_b_o(bottom[1]);
		int res3=check_b_o(top[2])||check_b_o(bottom[2]);
		for (int i=0;i<3;i++)
		{
			if ((!check_b_o(top[i])&&check_b_o(bottom[i])))
			{
				if (bottom[i]=='b')
					count_b++;
				else
					count_o++;
				check[i]=1;
				//k++;
			}
			if ((check_b_o(top[i])&&!check_b_o(bottom[i])))
			{
				if (top[i]=='b')
					count_b++;
				else
					count_o++;
				check[i]=1;
				//k++;
			}
		}
		//cout<<res1<<" "<<res2<<" "<<res3<<endl;
		if (!res1||!res2||!res3)
			cout<<"no"<<endl;
		else if (count_b==2&&count_o==1)
			cout<<"yes"<<endl;
		else if (count_b==0&&count_o==3||count_o==0&&count_b==3)
			cout<<"no"<<endl;
		else
		{
			for (int i=0;i<3;i++)
			{
				if (check[i]==0)
				{
					if (top[i]==bottom[i]&&top[i]=='b')
					{
						count_b++;
						check[i]=1;
					}
					else if (top[i]==bottom[i]&&top[i]=='o')
					{
						count_o++;
						check[i]=1;
					}
				}
			}
			if (count_b==2&&count_o==1)
			cout<<"yes"<<endl;
			else if (count_b==0&&count_o==3||count_o==0&&count_b==3||count_o==2)
			cout<<"no"<<endl;
			else 
			cout<<"yes"<<endl;
		}
}
}